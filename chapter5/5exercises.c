/* 
Gian Paraguya, 12/07/2025
Exercises for chapter 5.
*/


/*
1.

(a) i = 2; j = 3;
    k = i * j == 6;    // i * j has higher precedence than ==, so (i * j) == 6, which is true (1)
    printf("%d", k);    

*/

#include <stdio.h>

int main(void){
    int i, j, k;

    i = 2;
    j = 3;

    k = i * j == 6;
    printf("%d", k);

    return 0;
}
