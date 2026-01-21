#include<stdio.h>
int  main(){
    float p,r,t;
    printf("Enter principle : ");
    scanf("%f",&p);
    printf("Enter value r : ");
    scanf("%f",&r);
    printf("Enter value t : ");
    scanf("%f",&t);
    float in=p*t*r/100;
    printf("Simple Interest Is: %f",in);
    return 0;
}