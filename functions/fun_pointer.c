#include<stdio.h>
/*int sum(int a,int b);

int main(){
    int result;
    int (*ptr)(int, int) = &sum;
    result= *ptr(10, 20);
    printf("%d",result);
}

int sum(int a,int b){
    return a+b;
}*/

void fun(int a,int b){
     a=10;
     b=20;
    //printf("%d %d",a,b);
}
int main(){
    int a=20;
    int b=10;
    fun(a,b);
    printf("%d %d",a,b);
    return 0;
}