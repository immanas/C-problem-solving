#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter First Number :");
    scanf("%d", &a);
    printf("Enter Second Number :");
    scanf("%d", &b);
    printf("Enter Third Number :");
    scanf("%d", &c);
    if (a > b) // b is out
    {
        if (a > c)
            printf("%d is gratest", a);
        else // a<c
            printf("%d is gratest", c);
    }
    else
    {
        if (b > c)
            printf("%d is gratest", b);
        else // c>b
            printf("%d is gratest", c);
    }

    return 0;
}