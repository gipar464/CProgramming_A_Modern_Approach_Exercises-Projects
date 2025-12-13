#include <stdio.h>

int main(void){
    int n, n1, digits;

    printf("Enter an integer: ");
    scanf("%d", &n);
    n1 = n;
    for(int i = 0; n > 0; ++i){
        digits = i;
        n /= 10;
    }
    digits++; //because the algorithm is off by one; 
    printf("%d has %d digit(s).\n", n1, digits);
    return 0;
}