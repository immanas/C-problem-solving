#include <stdio.h>
int main()
{
    int marks[10] = {95,31,45,60,31,25,29,45,30,35};
    for (int i = 0; i <= 9; i++){
        if (marks[i]<35)
        {
            printf("The Fail Roll NO of students are : %d\n",i);
        }
        
    }

    return 0;
}