#include<stdio.h>
int main(){
    int n;
    printf("Enter Rows:");
    scanf("%d",&n);
    int m;
    printf("Enter Colums:");
    scanf("%d",&m);
    for (int i = 1; i <= n; i++)
    {
       if (i!=0)
       {
         for (int j = 1; j <= i; j++)
        {
            printf("%d",j) ;  
        }
        printf("\n");
       }
       
    }
    return 0;
}