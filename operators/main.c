#include <stdio.h>


int main(){

    int a = 33;
    int b = 2;

    /* --a, evaluated before the expression is run.*/
    printf("res is %d\n", --a); 
    /* a++, evaluated after the expression is run.*/
    printf("res is %d\n", a++ );
    printf("final res is %d\n", a);

    //Bitwise
    unsigned int a = 60;
    unsigned int b = 13;

    int result = 0;

    result = a & b;

    printf("The result is %d", result);

    return 0;
}