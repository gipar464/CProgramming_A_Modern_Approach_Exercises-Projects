/* Checks numbers for repeated digits 
 * 01/15/2026
 */
//jut smth:
#include <stdio.h>
#include <stdbool.h> /* C99 only */

int main(void){
    bool digit_seen[10] = {false};
    int digit, decider = 0;
    long n[];
    long m; 
    int j = 0;
    
    do{
        printf("Enter a number: ");
        scanf("%ld", &n[j]);
        while(n[j] > 0){
            digit = n[j] % 10;
            if(digit_seen[digit]){
                decider = 1;
                break;
            }
            digit_seen[digit] = true;
            n[j] /= 10;
        }
        if(decider == 1){
            printf("Repeated digit\n");
        }else{
            printf("No repeated digit\n");
        }
        j++;
    } while(m > 0);

    return 0;
}



