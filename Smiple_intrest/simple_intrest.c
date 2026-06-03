#include <stdio.h>

int main()
{

    float principle_amount;
    float time;
    float rate_of_intrest;
    float Simple_Intrest;

    printf("Enter The Principle Amount \n");
    scanf("%f", &principle_amount);
    printf("Enter The Time Period \n");
    scanf("%f", &time);
    printf("Enter The rate of Intrest \n");
    scanf("%f", &rate_of_intrest);

    Simple_Intrest = (principle_amount * rate_of_intrest * time) / 100;

    printf("The Simple Intrest Of The Given Data Is %0.2f \n", Simple_Intrest);

    return 0;
}
