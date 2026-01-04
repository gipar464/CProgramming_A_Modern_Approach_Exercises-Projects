/* 01/04/2026 */

#include <stdio.h>

int main(void){
    int input, factorial;

    printf("Enter a positive integer: ");
    do{
        scanf("%d", &input);
        if(input < 0){
            printf("Please enter a positive integer instead. ");
            scanf("%d", &input);
        }
    } while(input < 0);
    
    factorial = input;

    for(int i = input - 1; i > 0; --i){
        factorial *= i;
    }
    
    printf("Factorial of %d: %d\n", input, factorial);

    return 0;
}
