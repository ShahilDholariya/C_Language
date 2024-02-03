#include<stdio.h>
int rectangle(int l,int b){
    return l*b;
}
int main(){
    int l,b,area;
    int (*fp)(int,int);//Declareation of function pointer
    fp=rectangle;
    printf("Enter the value of length and width:\n");
    scanf("%d %d",&l,&b);
    area=(*fp)(l,b);
    printf("area of rectangle = %d\n",area);
    return 0;
}