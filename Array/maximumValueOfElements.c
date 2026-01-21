#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    int max = 0;  // maximum variable

    for (int i = 0; i <= n - 1; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]); // read elements into array
    }

    for (int i = 0; i <= n - 1; i++) {
        if (max <= arr[i])
        {
            max = arr[i];
        }
        
    }

    printf("The Maximum value from the element is: %d", max);

    return 0;
}
