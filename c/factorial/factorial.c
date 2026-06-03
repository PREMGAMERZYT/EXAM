#include <stdio.h>

int main()
{

    int n, i;
    long int fact = 1;

    printf("please enter the number which you want to find factorial \n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("The number is invalid \n");
    }
    else
    {
        for (i = n; i > 0; i--)
        {
            fact = fact * i;
        }
        printf("The Factorial of the given number %d is %d", n, fact);
    }

    return 0;
}
