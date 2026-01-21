#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Ram's Age:");
    scanf("%d", &a);
    printf("Enter Shyam's Age:");
    scanf("%d", &b);
    printf("Enter Ajay's Age:");
    scanf("%d", &c);
    if(b>a && c>a)
    {
        printf("Ram is youngest");
    }
     if(a>b && c>b)
    {
        printf("Shyam is youngest");
    }
     if(b>c && a>c)
    {
        printf("Ajay is youngest");
    }
    return 0;
}