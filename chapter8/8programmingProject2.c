/* Checks numbers for repeated digits 
 * 01/12/2026
 */

#include <stdio.h>
#include <stdbool.h> /* C99 only */

int main(void){
    bool digit_seen[10] = {false};
    int digit;
    long n;
    int occurence_list[10] = {0}; // 10 for numbers 0 through 9

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;
        if(digit_seen[digit]){
            ++occurence_list[n];
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    
    printf("Digit:");
    for(int i = 0; i < 10; ++i){
        printf(" %d", i);
    }
    
    printf("\n");
    
    printf("Occurrences:");
    for(int i = 0; i < 10; ++i){
        printf(" %d", occurence_list[i]);
    }

    return 0;
}
