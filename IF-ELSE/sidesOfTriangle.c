#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter First Number:");
    scanf("%d", &a);
    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("These are Sides of Triangle");
    }
    else{
        printf("invalid traingle");
    }
    
    return 0;
}