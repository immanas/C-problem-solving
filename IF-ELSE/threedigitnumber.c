#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n>100 && n<1000)
    {
        printf("This is a Three digit Number");
    }
    else{
        printf("This Is not a three Digit Number");
    }
    return 0;
}