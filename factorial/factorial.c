#include <stdio.h>

int main()
{

    int n , i; //5

    long int fact = 1; //120

    printf("please enter the number in which factorial you want to find \n"); //5
    scanf("%d", &n); //5

    if (n <= 0)
    {
        printf("The Number Is Invalid Please Enter The Number Above 0 \n");
    }
    else
    {
        for (i = n; i > 0; i--) //0
        {
            fact = fact * i;
        }
        printf("The Factorial Number Of The Given Number %d is %d", n, fact);
    }

    return 0;
}
