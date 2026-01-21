#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter number of students: ");
    scanf("%d", &r);
    printf("Enter number of subjects: ");
    scanf("%d", &c);

    int arr[r][c];

    // Input marks
    for (int i = 0; i < r; i++)
    {
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < c; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print table after input
    printf("\nThe Table is:\n");
    for (int i = 0; i < r; i++)
    {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
