#include<stdio.h>

int fun();
int main(){
    int a=20;
    printf("Before fun calling value of a is = %d\n",a);
    fun();
    printf("\nafter fun calling value of a is = %d",a);
    printf("\n");
    return 0;
}

int fun(){
    int a=10;
    printf("value of a is = %d",a);
}