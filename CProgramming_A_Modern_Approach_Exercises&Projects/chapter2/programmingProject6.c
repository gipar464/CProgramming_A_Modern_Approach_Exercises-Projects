/* Gian Paraguya, 10/14/2025 */

#include <stdio.h>

int main(void){
    float userValue;
    float finalValue;

    printf("Please enter an numerical value: ");
    scanf("%f", &userValue);

    finalValue = (3 * userValue + 2) * (userValue - 5) * (userValue - 1) * (userValue + 7) * (userValue - 6);

    printf("The final value, using your numerical input, is: %.2f\n", finalValue);
}