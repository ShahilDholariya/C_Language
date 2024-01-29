#include<stdio.h>
int main(){
    int i,j,n,alp='A';
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for ( i = n; i >= 1; i--)
    {
        for ( j = n; j >= i; j--)
        {
            printf("%c",alp);
            alp++;
        }
        printf("\n");
    }
    return 0;
}
