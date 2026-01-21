#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    if (n%4==0)
    {
        printf("Leap Year");
    }
    else if (n!=0)
    {
        printf("Non Leap Year");
    }
    
    return 0;
}