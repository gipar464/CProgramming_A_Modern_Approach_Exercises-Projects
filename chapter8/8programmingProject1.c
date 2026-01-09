/* 01/07/2026 */

#include <stdio.h>
#include <stdbool.h> /* C99 only */

int main(void){
    bool digit_seen[10] = {false};
    int digit, i;
    long n;
    int numbers_seen[0];
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    i = 0;
    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            numbers_seen[i] = digit;
            ++i;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if(n > 0){
        printf("Repeated digit(s): ");
        for(int j = 0; j < i; ++j){
            printf("%d", numbers_seen[j]);
        }

    }else{
        printf("No repeated digit\n");
    }

    return 0;
}
