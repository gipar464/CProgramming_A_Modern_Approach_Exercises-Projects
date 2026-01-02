/* 12/31/2025 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    float o1, o2, result = 0.0f; //o1 & o2 == operand1 and operand2, respectively 
    char operation;

    printf("Enter an expression: ");
    do{
        scanf("%f", &o1);
        scanf("%c", &operation);
        scanf("%f", &o2);
        if(operation == '*'){
            result += o1 * o2;    
        }
        else if(operation == '/'){
            result += o1 / o2;
        } 
        else if(operation == '+'){
            result += o1 + o2;
        }
        else if(operation == '-'){
            result += o1 - o2;
        }
    } while(getchar() != '\n');

    printf("Value of epxression: %f", result);
    
    return 0;
}
