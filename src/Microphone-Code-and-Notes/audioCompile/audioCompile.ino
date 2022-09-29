#include "IMU_Classifier.h"
#include <Arduino_LSM9DS1.h>

const float accelerationThreshold = 2.5; // threshold of significant in G's
const int numFeatures = 6;
const int numSamples = 119;

int samplesRead = numSamples;
int curr_sample;

Eloquent::ML::Port::Classifier clf; //clf is your model instance

void setup()
{
    curr_sample = 0;
    Serial.begin(9600);
    while (!Serial)
        ;
    if (!IMU.begin())
    {
        Serial.println("Failed to initialize IMU!");
        while (1)
            ;
    }
}

void loop()
{
    float aX, aY, aZ, gX, gY, gZ;
    static float features[714];

    // Checks the sample count and G-Force threshold
    while (samplesRead == numSamples)
    {
        if (IMU.accelerationAvailable())
        {
            IMU.readAcceleration(aX, aY, aZ);
            float aSum = fabs(aX) + fabs(aY) + fabs(aZ);
            if (aSum >= accelerationThreshold)
            {
                curr_sample++;
                samplesRead = 0;
                break;
            }
        }
    }

    // While a valid number of samples, if data is avalible, read acceleration and gryoscope data and add each into the features 
    while (samplesRead < numSamples)
    {
        if (IMU.accelerationAvailable() && IMU.gyroscopeAvailable())
        {
            IMU.readAcceleration(aX, aY, aZ);
            IMU.readGyroscope(gX, gY, gZ);
            features[(samplesRead * numFeatures) + 0] = aX;
            features[(samplesRead * numFeatures) + 1] = aY;
            features[(samplesRead * numFeatures) + 2] = aZ;
            features[(samplesRead * numFeatures) + 3] = gX;
            features[(samplesRead * numFeatures) + 4] = gY;
            features[(samplesRead * numFeatures) + 5] = gZ;
            samplesRead++;
        }
    }

    Serial.println(clf.predict(features)); //predict with your new features and print the outcome
}
