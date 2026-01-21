#include<stdio.h>

void decreasing(int n){
    if ( n == 0) return;
    printf("%d\n",n);
    decreasing(n-1);
    return ;
}


int main(){
    int x;
    printf("Enter A Number:");
    scanf("%d",&x);   
    decreasing(x);
    return 0;
}