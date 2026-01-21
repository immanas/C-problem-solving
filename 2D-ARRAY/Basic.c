#include<stdio.h>
int main(){
    int r,c;
    printf("Enter Row no:");
    scanf("%d",&r);
    printf("Enter Column no:");
    scanf("%d",&c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // printf("Enter Row %d:\n column %d:",r,c);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}