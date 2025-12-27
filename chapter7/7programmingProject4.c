/* Program that translates an alphabetic phone number into numeric form
 * 12/25/2025 (christmas day btw!) */

// Enter a phone number: CALLATT
// Output should be: 2255288

#include <stdio.h>

int main(void){
    
    char ch;
	printf("Enter phone number: ");
    ch = getchar();
    putchar(ch);
    while(ch != '\n'){
        ch = getchar();
        putchar(ch);
	}
    
    // probably use switch-case statements here or inside the while loop to convert the characters to numbers



	return 0;
}
