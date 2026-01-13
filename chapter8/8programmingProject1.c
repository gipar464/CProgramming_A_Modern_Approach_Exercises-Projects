/* Checks numbers for repeated digits 
 * 01/09/2026
 * This is the modified version where the numbers repeated will now be listed 
 */

#include <stdio.h>
#include <stdbool.h> /* C99 only */

int main(void){
    bool digit_seen[10] = {false};
    int digit, i = 0;
    long n;
    int seen_numbers[10] = {0}; // for digits 0-9:wq

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            seen_numbers[i] = digit;
            ++i;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if(i > 0){
        printf("Repeated digit(s): ");
        for(int j = i - 1; j >= 0; --j){
            printf("%d ", seen_numbers[j]);
        }
    }else{
        printf("No repeated digit\n");
    }

    return 0;
}
