#include<stdio.h>
int add(int x, int y){
    return x+y;
}
int multi(int x, int y){
    return x*y;
}
int main(){
    int a,b;
    printf("Enter A number :");
    scanf("%d",&a);
    printf("Enter B number :");
    scanf("%d",&b);

    int sum = add(a,b);
    printf("%d",sum);
    int multiplication = multi(a,b);
    printf("%d",multiplication);
    return 0;
}