#include<stdio.h>
void fun(int arr[]){
    arr[2] = 11;
    return ;
}

int main(){
    // int n;
    // printf("Enter Array Size: ");
    // scanf("%d", &n);

    int arr[6]={1,2,3,4,5,6};
    printf("The value is: %d\n",arr[2]);
    fun(arr);

   // in array pass by reference is alwayas happens

    printf("The value is: %d",arr[2]);

    return 0;
}
