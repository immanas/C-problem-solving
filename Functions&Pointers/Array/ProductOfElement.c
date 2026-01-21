#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // Using long long to handle large products
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        product *= arr[i]; // Multiply each element with product
    }
    
    printf("Product of all elements in the array = %lld\n", product);
    return 0;
}
 