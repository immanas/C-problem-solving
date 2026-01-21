#include <stdio.h>
void swap(int* x, int*y){
    int temp ;
    temp =  *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a, b;
    printf("Enter First value Of a:");
    scanf("%d", &a);
    printf("Enter the second value:");
    scanf("%d", &b);
    int* x = &a;
    int* y = &b;
    swap(x,y);
    printf("The value of a is %d\n ", *x);
    printf("The value of b is %d ", *y);
    return 0;
}