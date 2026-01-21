#include<stdio.h>
int main(){
    int m,n;
    printf("Enter Row: ");
    scanf("%d",&m);
    printf("Enter Column: ");
    scanf("%d",&n);
    int a = n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
    
    return 0;
}