#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter Cost price: ");
    scanf("%d",&cp);
    printf("Enter Selling Price:");
    scanf("%d",&sp);
    if (sp>cp)
    {
        printf("Loss");
    }
    if (cp>sp)
    {
        printf("Profit");
    }
    if (sp==cp)
    {
        printf("No Profit , No Loss");
    }
    return 0;
}