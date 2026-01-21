#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    int b = 0;  // sum variable

    for (int i = 0; i <= n - 1; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]); // read elements into array
    }

    for (int i = 0; i <= n - 1; i++) {
        int sum = arr[i];  // value at current index
        b = b + sum;       // add to total sum
    }

    printf("Sum Of Given Elements is: %d", b);

    return 0;
}
