#include<stdio.h>

//extern int a;
int a=10;
int main(){
    extern int a;
    printf("%d",a);
    return 0;
}