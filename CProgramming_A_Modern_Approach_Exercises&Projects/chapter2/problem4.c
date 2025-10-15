/*Write a program that declares several int and float
  variables - without initializing them - and then prints their values.
  Is there any pattern to the values? (Usually there isn't.)*/

//Gian Paraguya, 10/14/2025

#include <stdio.h>

int main(void){
    int a;
    int b;
    int c;
    float x;
    float y;
    float z;

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);
    printf("The value of c is: %d\n", c);
    printf("The value of x is: %f\n", x);
    printf("The value of y is: %f\n", y);
    printf("The value of z is: %f\n", z);

    return 0;

    /*The values of the uninitialized variables are indeterminate and can vary each time the program is run.
      There is no specific pattern to the values; they may appear as random garbage values.*/
}