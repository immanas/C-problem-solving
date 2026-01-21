#include <stdio.h>
int main()
{
    int a;
    printf("Enter Percentage :");
    scanf("%d", &a);
    // more than 80 -> A
    // more than 60 -> B
    // more than 40 -> C
    // less than 40 -> D
    if (a > 80)
    {
        printf("A Grade");
    }
    else if (a > 60)
    {
        printf("B Grade");
    }
    else if (a > 40)
    {
        printf("C Grade");
    }
     else
    {
        printf("D Grade");
    }
    return 0;
}