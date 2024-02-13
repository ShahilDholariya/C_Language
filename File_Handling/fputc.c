#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file1.txt", "w"); 
    fputc('a', fp);               
    fclose(fp);   
    return 0;                
}