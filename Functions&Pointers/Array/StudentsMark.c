#include<stdio.h>
int main(){
    int marks[10] = {96,80,30,60,24,78,20,15,34,100};
    for (int i = 0; i <= 9; i++)
    {
        if (marks[i]<35)
        {
            printf("%d ",i);
        }
        
    }
    
    return 0;
}