#include <stdio.h>

int main()
{
    int r = 6;
    int h = 10;
    int vol = 3.14 * r * r * h;
    printf("Volume of cylinder with radius %d and with height %d is %2.d", r, h, vol);
    return 0;
}