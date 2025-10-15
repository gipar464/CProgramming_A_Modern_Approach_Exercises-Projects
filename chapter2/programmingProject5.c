/* Gian Paraguya, 10/14/2025 */

#include <stdio.h>

int main(void){
    float userValue;
    float finalAnswer;

    printf("Hello, user! Please enter a number value: ");
    scanf("%f", &userValue);

    finalAnswer = (3 * userValue * userValue * userValue * userValue * userValue);
    finalAnswer += (2 * userValue * userValue * userValue * userValue);
    finalAnswer -= (5 * userValue * userValue * userValue);
    finalAnswer -= (userValue * userValue);
    finalAnswer += (7 * userValue);
    finalAnswer -= 6;

    printf("The final answer using %.2f as your input value is: %.2f.", userValue, finalAnswer);

    return 0;
}