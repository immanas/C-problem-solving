#include<stdio.h>
int main(){
    int n;
    printf("Enter A Number:");
    scanf("%d",&n);
    int count = 0;
    while (n!=0)
    {
        n = n/10;
        count++;
    }
    printf("THE DIGIT OF GIVEN NUMBER IS: %d",count);
    return 0;
}