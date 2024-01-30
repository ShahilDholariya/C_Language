#include<stdio.h>
    int sum;
int main(){
    int n,r;
    
    printf("Enter any number:");
    scanf("%d",&n);

    while(n>0){
            r=n%10;
            sum=sum+r;
            n=n/10;
    }
    printf("Sum of number is: %d\n",sum);

    return 0;
}