/* Gian Paraguya, 11/29/2025 
   "The fate of ophelia~"*/

#include <stdio.h>

int main(void){

    int num1, denom1, num2, denom2;
    int resultNum, resultDenom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);


    resultNum = num1 * denom2 + num2 * denom1;
    resultDenom = denom1 * denom2;

    // printf("%d %d %d %d\n", num1, denom1, num2, denom2); //for debugging purposes
    printf("The sum is: %d/%d", resultNum, resultDenom);

    return 0;
}