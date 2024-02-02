#include <stdio.h>
int main()
{
    int a[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

    // print 2nd element of 1st 2d array
    printf("print 2nd element of 1st 2d array: %d\n", ***a + 1);      

    // print 1st element of 2nd 2d array   
    printf("print 1st element of 2nd 2d array: %d\n", *(**(a + 1)));     

    // print 2nd last element of 3d array
    printf("print 2nd last element of 3d array:%d\n", **(*(a + 1) + 1)); 
}