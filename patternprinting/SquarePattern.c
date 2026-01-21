#include<stdio.h>
int main(){
    int n;
    printf("Enter A Rows:");
    scanf("%d",&n);
    int m;
    printf("Enter  Colums:");
    scanf("%d",&m);
    for (int i = 1; i<=n; i++){
        for (int i = 1; i <=m; i++){
            printf("*");
        
        }
       printf("\n"); 
        
    }
    
    return 0;
}