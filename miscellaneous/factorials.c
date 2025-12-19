/*This program is writtin in vim btw ;p
 *It will calculate the factorial of a given natural number entered by the user.  
*/

#include <stdio.h>

int main(void){
	int n, factorial = 1;
	printf("Enter a number: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; ++i){
		factorial *= i; 
	}

	printf("The factorial of %d is %d\n", n, factorial);
	return 0;
}
