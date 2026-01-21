#include<stdio.h>
int main(){
    int n;
    printf("Enter A year:");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("It's A Leap Year");
    }
    else{
        printf("It's Not a Leap Year");
    }
    return 0;
}