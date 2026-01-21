#include<stdio.h>
int factorial(int n){
    if(n == 1 || n == 0) return 1;
    int fact = n*factorial(n-1);
    return fact;
}
int main(){
    int x;
    printf("Enter A Number:");
    scanf("%d",&x);
    
    int b = factorial(x);
    printf("The Factorial of the Given NUmber is: %d",b);
    return 0;
}