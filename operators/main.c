#include <stdio.h>


int main(){

    int a = 33;
    int b = 2;

    /* --a, evaluated before the expression is run.*/
    printf("res is %d\n", --a); 
    /* a++, evaluated after the expression is run.*/
    printf("res is %d\n", a++);
    printf("final res is %d\n", a);

    return 0;
}