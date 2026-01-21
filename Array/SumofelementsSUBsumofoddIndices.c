#include<stdio.h>
int main(){
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    int a = 0; // for even sum
    int b = 0; // for odd sum

    for (int i = 0; i <= n - 1; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n - 1; i++) {
        if (arr[i] % 2 == 0) {
            int sum = arr[i];
            a = a + sum; // sum of even
        }
        if (arr[i] % 2 != 0) {
            int sub = arr[i];
            b = b + sub; // sum of odd
        }
    }

    int result = a - b;
    printf("THE RESULT IS : %d\n", result);

    return 0;
}
