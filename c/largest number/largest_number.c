#include <stdio.h>

int main()
{

    int a, b, c;

    printf("enter any Three Numbers below \n");
    scanf("%d %d %d", a, b, c);

    if (a > b && a > c)
    {
        printf("The largest number amoung 3 is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("The largest number amoung 3 is %d", b);
    }
    else if (c > a && c > b)
    {
        printf("the gratest Number amoung 3 is %d", c);
    }
    else
    {
        printf("invalid");
    }

    return 0;
}
