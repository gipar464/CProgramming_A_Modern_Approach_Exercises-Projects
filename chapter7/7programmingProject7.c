#include <stdio.h>
#include <ctype.h>


int main(void){
    int num1, denom1, num2, denom2;
    int resultNum, resultDenom; 
    char ch; 
    
    printf("Enter two fractions separated by a plus sign: ");
    ch = getchar();
    while(ch != '\n'){
        ch = getchar(); 
       
        if(ch == '+'){
            scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
            resultNum = (num1 * denom2) + (denom1 * num2);
            resultDenom = denom1 * denom2;
        }
        else if(ch == '-'){
            scanf("%d/%d-%d/%d", &num1, &denom1, &num2, &denom2);
            resultNum = (num1 * denom2) - (denom1 * num2);
            resultDenom = denom1 * denom2;
        }  
        else if(ch == '*'){
            scanf("%d/%d*%d/%d", &num1, &denom1, &num2, &denom2);
            resultNum = num1 * num2;
            resultDenom = denom1 * denom2; 
        }
        else if(ch == '/'){
            scanf("%d/%d/%d/%d", &num1, &denom1, &num2, &denom2);
            resultNum = num1 * denom2;
            resultDenom = denom1 * num2; 
        }
    }

    printf("The resulting fraction is: %d/%d", resultNum, resultDenom);

    return 0;
}
