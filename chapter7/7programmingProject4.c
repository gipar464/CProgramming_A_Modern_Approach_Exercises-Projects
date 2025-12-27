/* Program that translates an alphabetic phone number into numeric form
 * 12/25/2025 (christmas day btw!) */

// Enter a phone number: CALLATT
// 2255288

#include <stdio.h>

int main(void){

	int number;
	printf("Enter phone number: ");
	while(getchar() != '\n'){
		number = getchar();
		putchar(number);	
	}


	return 0;
}
