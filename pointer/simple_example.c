#include<stdio.h>
int main(){
   int x=10;     //x=10
   int *p=&x;//pointer p is store address of variable x
   *p=5;
    printf("%d\n",*p);
    return 0;
}