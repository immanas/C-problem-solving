#include<stdio.h>
int main(){
    int arr[4] = {2,3,4,5};
    for (int i = 0; i <= 3; i++) // loop is starting from here  
    {
        printf("%p\n",&arr[i]);
    }
    
    
    return 0;
}