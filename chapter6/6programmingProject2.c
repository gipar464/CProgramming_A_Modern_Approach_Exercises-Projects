#include <stdio.h>

int main(void){
    int m, n, gcd, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while(1){
        if(n == 0){
            gcd = m;
            printf("Greatest common divisor: %d", gcd);
            return 0;
        } else{
            remainder = m % n;
            m = n;
            n = remainder;
        }
    }

    return 0;
}