#include<stdio.h>
int main(){
    int arr[7] = {7,23,44,76,45,8,98};
    int max = arr[0];
    for (int i = 0; i<=6; i++)
    {
       if (max<arr[i])
       {
        max = arr[i];
       }
        
    }
    printf("%d",max);
    return 0;
}