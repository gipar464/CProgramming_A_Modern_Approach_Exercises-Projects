/* Checks numbers for repeated digits 
 * 01/20/2026
 */

/* This is how I want the program to run:
 *      1) User will enter a number that is not 0
 *      2) If number entered is 0, then the program will terminate
 *      3) Each number entered by the user will be added onto an array
 *      4) The program should iterate through each index of the array and find at least one repeated digit
 *      5) If digit is found, then program will end and just say that there is a repeated digit
 *      6) if after every index of the array has been iterated and there hasn't been a repeated digit, then the program will end and say no repeated digit
 */

#include <stdio.h>
#include <stdbool.h> /* C99 only */

int main(void){
    bool digit_seen[10] = {false};
    int digit;
    long n;
    int arrayLength = 0;

    do{
        printf("Enter a number: ");
        scanf("ld", &n);
        ++arrayLength;
    } while(n > 0);
  
    long user_list[arrayLength];
    
           

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
