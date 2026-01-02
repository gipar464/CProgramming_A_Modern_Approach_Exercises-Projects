/* 12/31/2025 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    float o1, o2, result = 0.0f; //o1 & o2 == operand1 and operand2, respectively 
    char ch, operation;

    printf("Enter an expression: ");
        
    do{
        scanf("%f%c%f", &o1, &operation, &o2);
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
        ch = getchar();
    } while(ch != '\n');

    printf("Value of epxression: %f", result);
    
    return 0;
}
