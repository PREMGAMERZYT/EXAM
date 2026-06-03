#include <stdio.h>

int main()
{

    float p;
    float t;
    float r;
    float SI;

    printf("Enter The Principle Amount");
    scanf("%d", &p);
    printf("Enter The Time Period");
    scanf("%d", &t);
    printf("Enter The rate of Intrest");
    scanf("%d", &r);

    SI = (p * r * t) / 100;

    printf("The Simple Intrest Of The Given Data Is %d", SI);

    return 0;
}
