/* Checks numbers for repeated digits 
 * 01/12/2026
 */

#include <stdio.h>
#include <stdbool.h> /* C99 only */

int main(void){
    bool digit_seen[10] = {false};
    int digit, counter = 0;
    long n;
    int num_list[10];

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
                     
            ++counter;
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
