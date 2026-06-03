#include <stdio.h>

int main()
{

    int n, i;

    long int fact = 1;

    printf("please enter the number in which factorial you want to find");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("The Number Is Invalid Please Enter The Number Above 0");
    }
    else
    {
        for (i = n; i > 0; i--)
        {
            fact = fact * i;
        }
        printf("The Factorial Number Of The Given Number %d is %d", n, fact);
    }

    return 0;
}
