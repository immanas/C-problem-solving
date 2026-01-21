#include<stdio.h>
int main(){
    int n;
    printf("Enter A Number:");
    scanf("%d",&n);
    if (n%5==0 || n%3==0)
    {
        printf("IT's Divisible");
    }

    else{
        printf("IT's not Divisible");
    }
    
    return 0;
}