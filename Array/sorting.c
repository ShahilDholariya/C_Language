#include<stdio.h>
int main(){
    int a[5] = {20,12,99,78,67};
    int temp,i,j;

    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i=0;i<5;i++)
            {
            printf("%d ",a[i]);
            }
    return 0;
}