#include<stdio.h>
int main()
{
    float l,w;
    printf("Enter the Length of Rectangle:");
    scanf("%f",&l);
    printf("Enter the breadth of Rectangle:");
    scanf("%f",&w);
    float a = w*l;
    float b = 2 * (l + w);
    if (a>b)
    {
        printf("The Area Is Greater than perimeter: ");
    }
    else{
        printf("The perimeter is not Greater than perimeter");
    }

    return 0;
}