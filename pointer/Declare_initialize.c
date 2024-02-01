#include<stdio.h>
int main(){
    int x=5;
    int *ptr;   //Declaration of pointer
    ptr=&x; //initialization using address operator
    printf("%d\n",*ptr);
    return 0;
}