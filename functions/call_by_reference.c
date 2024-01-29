#include <stdio.h>
void fun(int *a);

void fun(int *a) {
    printf("value of a is: %d\n",*a);
}

int main() {
    int x = 10;
    printf("Before function calling: %d\n", x);
    fun(&x);
    printf("After function calling: %d\n", x);

    return 0;
}
