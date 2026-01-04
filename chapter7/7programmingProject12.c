/* 12/31/2025 */
// the problem in this problem here is that it will only work for three operands and two operators. in the future, i will implement an infinite loop that allows the user to enter and amount of operators and operands as they wish.


#include <stdio.h>
#include <ctype.h>

int main(void){
    float operand1, operand2, operand3, result = 0.0f; 
    char operator1, operator2;

    printf("Enter an expression: ");
    scanf("%f%c%f%c%f", operand1, operator1, operand2, operator2, operand3);
    
    switch(operator1){
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            result += operand1 / operand2;
            break;
        case '+':
            result += operand1 + operand2;
            break;
        case '-':
            result += operand1 - operand2;
            break;
    }

    switch(operator2){
        case '*':
            result = result * operand3;
            break;
        case '/':
            result = result / operand3;
            break;
        case '+':
            result = result + operand3;
            break;
        case '-':
            result = result - operand3;
            break;
    }

    printf("Value of epxression: %f\n", result);
    return 0;
}
