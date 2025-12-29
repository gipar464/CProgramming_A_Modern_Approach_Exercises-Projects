/* 12/27/25 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    int num1, denom1, num2, denom2;
    int resultNum, resultDenom; 
    char operation; 
    
    printf("Enter your first fraction: ");
    scanf("%d/%d", &num1, &denom1);
    printf("Enter an operation: (*, /, +, -): ");
    operation = getchar();
    printf("Enter your section fraction: ");
    scanf("%d/%d", &num2, &denom2);

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
