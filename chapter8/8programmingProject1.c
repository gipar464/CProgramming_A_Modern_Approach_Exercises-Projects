/* Checks numbers for repeated digits 
 * 01/09/2026
 * This is the modified version where the numbers repeated will now be listed 
 */

#include <stdio.h>
#include <stdbool.h> /* C99 only */

int main(void){
    bool digit_seen[10] = {false};
    int digit;
    long n;
    int seen_numbers[10]; 

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if(n > 0){
        printf("Repeated digit\n");
    }else{
        printf("No repeated digit\n");
    }

    return 0;
}
