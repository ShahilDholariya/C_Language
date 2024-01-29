#include <stdio.h>
int func();
int main()  
{ 
    int p;
    p=func(); 
    printf("%d\n",p);
    p=func();
    printf("%d\n",p);
    return 0;  
}  
int func()  
{   
    static int count=0; 
    count++; 
  
   return count; 
}  
 
 