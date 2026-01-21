#include<stdio.h>
int main(){
    int n;
    printf("Enter num:");
    scanf("%d",&n);
   // int m;
    //printf("Enter each digit no:");
    //scanf("%d",&m);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=n+1-i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}