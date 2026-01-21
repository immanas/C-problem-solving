#include<stdio.h>
int main (){
    int x,y,z;
    printf("Enter First Number:");
    scanf("%d",&x);
    printf("Enter First Number:");
    scanf("%d",&y);
    printf("Enter First Number:");
    scanf("%d",&z);
    if (x>y && x>z)
    {
        printf("X is grater then others");
    }
    if (y>x && y>z)
    {
        printf("Y is grater then others");
    }
    if (z>x && z>y)
    {
        printf("z is grater then others");
    }
    
    return 0;
}