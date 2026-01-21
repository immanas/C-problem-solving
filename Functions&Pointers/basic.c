#include<stdio.h>
void ram(){
    printf("HERE IS THE END OF THIS BASIC CODE\n");
    return;
}
void mg(){
    printf("My Name Is Manas\n");
    ram();
    return;
}
void manas(){
    printf("MY name is MG\n");
    mg();
    return;
}
int main(){
    manas();
    return 0;
}