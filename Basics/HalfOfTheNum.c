#include <stdio.h>

int main() {
    int number;     
    float half;     // Variable to store half of the number

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Compute half of the number
    half = number / 2.0;

    // Print the result
    printf("Half of %d is %.2f\n", number, half);

    return 0;
}
