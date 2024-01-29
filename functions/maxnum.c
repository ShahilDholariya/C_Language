#include<stdio.h>

int max(int a,int b);

int main(){
    int a = 100;
   int b = 210;
   int maxv;
 
   maxv = max(a, b);
   printf( "Max value is : %d\n", maxv);
 
   return 0;
}

int max(int a,int b){
    int store;
    if (a>b){
        store=a;
    }
    else{
        store=b;
    }
}