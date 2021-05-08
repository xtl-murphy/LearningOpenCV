//
// Created by 61072 on 2021/1/25.
//

#include "Learning.hpp"

class ColorTest
{
public:
    union {
        int data[2]  = {0, 0};
        int xy[2];
        struct {
            union {
                int x, s;
            };
            union {
                int y, t;
            };
        };
    };
};

int main()
{
    LOGNOMSG("union", "test");
    ColorTest test;


    test.x = 1;
    test.y = 2;
    LOGNOMSG("union", "test xy(%d, %d) st(%d, %d), data : %d, %d ; xy : (%d) sizeof(%d)",
            test.x, test.y,
            test.s, test.t,
            test.data[0], test.data[1],
            test.xy[1],
            sizeof(test));
}