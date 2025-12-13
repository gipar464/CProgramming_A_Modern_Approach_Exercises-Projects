#include <stdio.h>

int main(void){
    int n, d, n1, d1, gcd, remainder; //numerator and denominator
    
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);

    //find the gcd
    while(1){
        if(d == 0){
            gcd = n;
            n1 = n/gcd;
            d1 = d/gcd;
            printf("In lowest terms: %d/%d\n", n1, d1);
            return 0;
        } else{
            remainder = n % d;
            n = d;
            d = remainder;
        }
    }



}

/*
use inputs 49/97. the simplified version of it is 7/13.
*/