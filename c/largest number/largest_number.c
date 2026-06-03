#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Enter any 3 numbers below \n");

    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("The Number %d Is Graters Number \n", a);
    }
    else if (b > a && b > c)
    {
        printf("The Number %d Is the Gratest Number\n", b);
    }
    else if (c > a && c > b)
    {
        printf("The Number %d Is The Gratest Number\n", c);
    }
    else
    {
        printf("invlaid");
    }

    return 0;
}