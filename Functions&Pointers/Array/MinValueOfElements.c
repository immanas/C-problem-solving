#include<stdio.h>
int main(){
    int arr[7] = {7,23,44,76,45,8,98};
    int min = arr[0];
    for (int i = 0; i<=6; i++)
    {
       if (min>arr[i])
       {
        min = arr[i];
       }
        
    }
    printf("%d",min);
    return 0;
}