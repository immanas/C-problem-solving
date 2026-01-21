#include<stdio.h>
int main(){
    int arr[4] = {2,3,4,5};
    for (int i = 0; i <= 3; i++)
    {
        printf("%p\n",&arr[i]);
    }
    
    
    return 0;
}