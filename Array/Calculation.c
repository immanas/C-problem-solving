#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i <= n - 1; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]); // read elements into array
    }

    for (int i = 0; i <= n - 1; i++) {
        if (arr[i]%2==0){
            arr[i] = arr[i]*2;
            printf("The even index value is %d\n",arr[i]);
        }
        if (arr[i]%2!=0){ //odd >- adding by 10
            arr[i] = arr[i]+10;
            printf("The odd index value is %d\n",arr[i]);
        }   
    }


    return 0;
}
