#include<stdio.h>

int fun();
int var=10; //global var

int main(){
    int var=5; //Local var
    printf("%d\n",var);
    fun();
    return 0;
}
int fun(){
    printf("%d",var);
}