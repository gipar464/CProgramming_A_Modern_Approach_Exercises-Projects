/* 12/30/2025 */
/* Calculates the amount of vowels in a given sentence. However, it does not account for sentences with the letter 'Y' as its sole vowel. */

#include <stdio.h>
#include <ctype.h>


int main(void){
    char ch; 
    int len;

    printf("Enter a sentence: ");
   
    do {
        ch = toupper(getchar());
        switch (ch){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                ++len;
        }    
    } while(ch != '\n');

    printf("Your sentence contains %d vowels.\n", len);

    return 0;
}
