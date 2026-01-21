#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact*i;
    }
   return fact; 
}
int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r)); //This function is use for find ncr whole formula value,not factorial, to find factorial value go factorial()
    return ncr;// which you want to print you have to write it after the return.
}
int main(){
    int n;
    printf("Enter A number:");
    scanf("%d",&n);
    for (int  i = 0; i <= n; i++)
    {
        for (int  j = 0; j <= i ; j++)
        {
            int icj = combination(i,j); //here icj will print like pattern printing, formula in combination()
            printf("%d ", icj);
        }
        printf("\n");
    }
     
    return 0;
}