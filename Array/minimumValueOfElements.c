#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= n - 1; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];  

    for (int i = 1; i <= n - 1; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    printf("The Minimum value from the element is: %d", min);

    return 0;
}
