#include <stdio.h>

union data {
    int i;
    float f;
};


void main(void)
{
    union data d1;

    d1.i = 10;
    d1.f = 3.14;

    printf("%d \n", d1.i);
    printf("%.2f \n", d1.f);
}