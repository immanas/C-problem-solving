#include<stdio.h>
int main(){
    int a,b,c,d,e,p;
    printf("Enter the mark of Math: ");
    scanf("%d",&a);
    printf("Enter the mark of English: ");
    scanf("%d",&b);
    printf("Enter the mark of Bengali: ");
    scanf("%d",&c);
    printf("Enter the mark of Science: ");
    scanf("%d",&d);
    printf("Enter the mark of Geo: ");
    scanf("%d",&e);
    p = (a+b+c+d+e)/5;
    printf("The persentage of five subject is  : %d",p);
    return 0;
}