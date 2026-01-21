#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            printf("The Number is divisible by 5,3 Not by 15");
        }
        else
        {
            printf("The Number Is divisible by 15");
        }
    }
    else
    {
        printf("The number is not divisible by 3 or 5");
    }
    return 0;
}