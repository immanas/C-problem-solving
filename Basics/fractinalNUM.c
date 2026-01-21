#include<stdio.h>
int main(){
    float x;
    printf("Enter first num:");
    scanf("%f",&x);
    int y;
    printf("Enter Second Number:");
    scanf("%d",&y);
    y =x;
    float z=x-y;
    printf("The fractional numbetr is: %f",&z);
    return 0;
}