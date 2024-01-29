#include<stdio.h>

// Without return and argument

int sum();

int main(){
    sum();
}

int sum(){
    int a=20;
    int b=40;
    int s;
    s=a+b;
    printf("%d",s);
}



//without argument with return
/*int sum();

int main(){
    int result;
    result=sum();
    printf("%d",result);
}

int sum(){
    int a=20;
    int b=40;

    return a+b;
}*/



//without return with argument

/*int sum(int a,int b);

int main(){
    int a=20;
    int b=30;
    sum(a,b);
}

int sum(int a,int b){
    
    printf("%d",a+b);
}*/



//with return and argument

/*int sum(int a,int b);

int main(){
    int a=30;
    int b=70;
    int result;
    result=sum(a,b);
    printf("%d",result);
}

int sum(int a,int b){
    return a+b;
}*/