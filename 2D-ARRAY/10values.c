#include<stdio.h>
int main(){
    // int r,c;
    // printf("Enter Row no:");
    // scanf("%d",&r);
    // printf("Enter Column no:");
    // scanf("%d",&c);
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            // printf("Enter Row %d:\n column %d:",r,c);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Matrix:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}




array,linked lists,stacks,queues,binary search, hash table,heaps,graphs,tries,union find,