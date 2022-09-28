#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class Classifier {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[452] <= 0.369499996304512) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #2
                        if (x[440] <= 0.3865000009536743) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #3
                        if (x[270] <= 0.2815000042319298) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #4
                        if (x[668] <= 0.3935000076889992) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #5
                        if (x[624] <= 0.4124999940395355) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #6
                        if (x[708] <= 0.4385000020265579) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #7
                        if (x[440] <= 0.3355000028386712) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #8
                        if (x[272] <= 0.33799999579787254) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #9
                        if (x[624] <= 0.36549998819828033) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #10
                        if (x[326] <= 0.22849999368190765) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #11
                        if (x[578] <= 0.44349999632686377) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #12
                        if (x[134] <= 0.44450001418590546) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #13
                        if (x[624] <= 0.42249999940395355) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #14
                        if (x[211] <= 0.008000001311302185) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #15
                        if (x[335] <= 16.357500076293945) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #16
                        if (x[468] <= 0.30149999260902405) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #17
                        if (x[362] <= 0.31650000996887684) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #18
                        if (x[482] <= 0.413000013679266) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #19
                        if (x[709] <= -0.2604999989271164) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #20
                        if (x[242] <= 0.2500000111758709) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #21
                        if (x[542] <= 0.46549998968839645) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #22
                        if (x[524] <= 0.43550000339746475) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #23
                        if (x[691] <= -0.4234999865293503) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #24
                        if (x[607] <= -0.4125000089406967) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #25
                        if (x[368] <= 0.3269999995827675) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #26
                        if (x[344] <= 0.21649999916553497) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #27
                        if (x[47] <= 1.6785001754760742) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #28
                        if (x[404] <= 0.2870000028051436) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #29
                        if (x[637] <= -0.2744999974966049) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #30
                        if (x[368] <= 0.3269999995827675) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #31
                        if (x[666] <= 0.4580000042915344) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #32
                        if (x[92] <= 0.15549999848008156) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #33
                        if (x[482] <= 0.45000001415610313) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #34
                        if (x[656] <= 0.4659999869763851) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #35
                        if (x[413] <= -16.23550033569336) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #36
                        if (x[353] <= -1.5565004348754883) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #37
                        if (x[86] <= 0.24049999564886093) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #38
                        if (x[401] <= -5.675999820232391) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #39
                        if (x[234] <= 0.2084999978542328) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #40
                        if (x[590] <= 0.5265000015497208) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #41
                        if (x[260] <= 0.33400000631809235) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #42
                        if (x[618] <= 0.39100000262260437) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #43
                        if (x[554] <= 0.48249999433755875) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #44
                        if (x[176] <= 0.306999996304512) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #45
                        if (x[86] <= 0.17899999767541885) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #46
                        if (x[145] <= 0.0034999996423721313) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #47
                        if (x[602] <= 0.4780000150203705) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #48
                        if (x[518] <= 0.4560000076889992) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #49
                        if (x[350] <= 0.2800000011920929) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #50
                        if (x[572] <= 0.45950000919401646) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #51
                        if (x[666] <= 0.4130000025033951) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #52
                        if (x[290] <= 0.304500013589859) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #53
                        if (x[440] <= 0.3400000026449561) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #54
                        if (x[194] <= 0.3034999966621399) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #55
                        if (x[678] <= 0.3945000022649765) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #56
                        if (x[482] <= 0.413000013679266) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #57
                        if (x[368] <= 0.39249999076128006) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #58
                        if (x[654] <= 0.41349999606609344) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #59
                        if (x[476] <= 0.4324999898672104) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #60
                        if (x[656] <= 0.41850000247359276) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #61
                        if (x[353] <= 4.668999910354614) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #62
                        if (x[326] <= 0.17749999463558197) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #63
                        if (x[512] <= 0.42149999737739563) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #64
                        if (x[494] <= 0.4100000113248825) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #65
                        if (x[512] <= 0.4319999888539314) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #66
                        if (x[224] <= 0.08299999684095383) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #67
                        if (x[536] <= 0.4534999914467335) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #68
                        if (x[566] <= 0.4504999965429306) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #69
                        if (x[266] <= 0.2974999868310988) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #70
                        if (x[356] <= 0.35599999874830246) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #71
                        if (x[278] <= 0.3125000149011612) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #72
                        if (x[248] <= 0.3395000025629997) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #73
                        if (x[104] <= 0.20400000363588333) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #74
                        if (x[524] <= 0.4465000107884407) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #75
                        if (x[410] <= 0.23799999430775642) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #76
                        if (x[318] <= 0.22200000286102295) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #77
                        if (x[228] <= 0.32750000804662704) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #78
                        if (x[566] <= 0.42449999740347266) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #79
                        if (x[697] <= -0.37049998342990875) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #80
                        if (x[488] <= 0.40700000524520874) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #81
                        if (x[276] <= 0.19600000232458115) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #82
                        if (x[464] <= 0.44599999487400055) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #83
                        if (x[446] <= 0.38199999183416367) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #84
                        if (x[462] <= 0.22100000083446503) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #85
                        if (x[152] <= 0.4025000184774399) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #86
                        if (x[578] <= 0.44349999632686377) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #87
                        if (x[506] <= 0.3905000165104866) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #88
                        if (x[368] <= 0.31200001016259193) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #89
                        if (x[395] <= -13.092000007629395) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #90
                        if (x[512] <= 0.42149999737739563) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #91
                        if (x[506] <= 0.3905000165104866) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #92
                        if (x[608] <= 0.44199999794363976) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #93
                        if (x[329] <= 26.0314998626709) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #94
                        if (x[524] <= 0.3795000035315752) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #95
                        if (x[686] <= 0.4279999854043126) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #96
                        if (x[278] <= 0.31599999964237213) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #97
                        if (x[632] <= 0.45399999152868986) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #98
                        if (x[530] <= 0.4375000037252903) {
                            votes[1] += 1;
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #99
                        if (x[139] <= -0.06549999862909317) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #100
                        if (x[23] <= 28.167500495910645) {
                            votes[0] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }