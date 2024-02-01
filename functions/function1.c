#include<stdio.h>
int sum(int a, int b);

int main(){
    int c;
    c=sum(2,3);
    printf("%d",c);
    return 0;
}

int sum(int a,int b){
    return a+b;
}