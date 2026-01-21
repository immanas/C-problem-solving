#include<stdio.h>
void parthib(){
    printf("Hello Anisha!\n");
    return;
}
void shivam(){
    printf("Hello Parthib!\n");
    parthib();
    return;
}
void rishi(){
    printf("Hello Shivam!\n");
    shivam();
    return;
}
void mg(){
    printf("Hello Rishi!\n");
    rishi();
    return;
}
int main(){
    printf("Hello Manas!\n");
    mg();
    return 0;
}