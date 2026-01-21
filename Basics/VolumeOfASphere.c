#include<stdio.h>
int main (){
    float r; //enter the redius
    printf("Enter A Redius:");
    scanf("%f",&r);
    float sp = 4*3.134*r*r*r/3;
    printf("The Volume Is: %f",sp);
    return 0;
}