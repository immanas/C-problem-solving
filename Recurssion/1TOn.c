#include<stdio.h>

void increasing(int x, int y){
    if ( x>y) return;
    printf("%d\n",x);
    increasing(x+1, y);
    return ;
}


int main(){
    int n;
    printf("Enter A Number:");
    scanf("%d",&n);   
    increasing(1,n);
    return 0;
}