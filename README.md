# ML-Wand

This is a personal project that is designed to keep me refreshed on tiny ML while making cool products!
This project will use the [Arduino Nano 33 BLE Sense](https://docs.arduino.cc/hardware/nano-33-ble-sense)
powered by Tiny Machine Learning.

## Hardware - Arduino Nano 33 BLE Sense

I picked this board since it was the one I used in my Tiny ML Class at UNCG, and I am already familiar with it.
It is programmable via Arduino Sketches.

## Programming - Tiny ML

I am very interested in exploring Tiny ML and what it has to offer, and this project is a stepping stone to get me
back in the swing of things from my small hiatus this summer. The code in the repo is as of now, code I made while in my tiny ML Class at UNCG but formatted to be ready to accept the proper data but since I am waiting for the board to ship there is nothing to technically run since I cannot collect data without a board. I will update this readme and repo as I get the board and collect the data.

I am interested in getting a model that works with the IMU and microphone working together simultaneously so you would be
required to say a phrase and do a proper gesture to get the wand to trigger. To start this phrase and motion will be simple,
and the trigger would be nothing more than an LED, but as this progresses I will make variants that do different things
(to be decided).

If you want info as to what models I used, how/why my data is formatted the way it is, and general specifics about how the
code functions take a look into the Python notebook in /src

## General Timeline

My general goal for how I want to move through this project is as follows:

1. Create a model and sketch that combined blink an LED when it detects the proper gesture. Should run on battery and with reasonable precision and recall.
2. Create a model that recognizes a phrase using the Arduinos built in microphone. Edit the sketch to only blink the LED when it detects the proper gesture and phrase within a small amount of time (to be determined based on the efficiency of the program).
3. Create a 3D CAD Model to house the board and LED.
**End of Checkpoint 1**
4. Decide on a function for the wand (examples: Electronics Controller, Blinds Controller, TV Remote, etc)
5. Gather necessary components and alter CAD Model to house them
6. Alter sketch to preform decided function (to be determined based on decided function)
