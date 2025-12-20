#include <stdio.h>

int main(void){
	int n;
	float e = 1.0f, factorial = 1.0f;

    printf("Enter a number: ");
    scanf("%d", &n);

	for(int i = 1; i <= n; ++i){
	    factorial *= i;
        e += 1.0f/factorial; 
    }

    printf("e is approximately %.10f\n", e);
    return 0;
}
