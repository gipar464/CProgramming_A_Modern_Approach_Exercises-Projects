/* 12/27/25 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    int num1, denom1, num2, denom2;
    int resultNum, resultDenom; 
    char operation; 
    
    printf("Enter a fraction separated by an operation (*, /, +, -): ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &operation, &num2, &denom2);

    if(operation == '+'){
        resultNum = (num1 * denom2) + (denom1 * num2);
        resultDenom = denom1 * denom2;
    }
    else if(operation == '-'){
        resultNum = (num1 * denom2) - (denom1 * num2);
        resultDenom = denom1 * denom2;
    }  
    else if(operation == '*'){
        resultNum = num1 * num2;
        resultDenom = denom1 * denom2; 
    }
    else if(operation == '/'){
        resultNum = num1 * denom2;
        resultDenom = denom1 * num2;
    }
    
    printf("\n");
    printf("The resulting fraction is: %d/%d", resultNum, resultDenom);

    return 0;
}
