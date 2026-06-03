#include <stdio.h>

int main()
{
    float p, r, t, si;

    printf("please enter the principle amount \n");
    scanf("%f", &p);
    printf("enter The rate Of intrest \n");
    scanf("%f", &r);
    printf("please enter the time period \n");
    scanf("%f", &t);

    si = (p * t * r) / 100;

    printf("the simple intrets of the given data is %0.2f", si);

    return 0;
}