#include <stdio.h>

int main(void){
    float e = 1.0f, factorial = 1.0f; 
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; ++i){
	    factorial *= i;
	    e += 1.0/factorial;
    }



    printf("e is approximately %.10f.\n", e);
    return 0;
}
