#include <stdio.h>

int main(void){
    int userInput, od1, od2, od3, od4, od5; //od stands for octal digit

    printf("Enter a numebr between 0 and 32767: ");
    scanf("%5d", &userInput);


    od5 = userInput % 8;
    userInput /= 8;
    od4 = userInput % 8;
    userInput /= 8;
    od3 = userInput % 8;
    userInput /= 8;
    od2 = userInput % 8;
    userInput /= 8;
    od1 = userInput % 8;
    
    
    printf("In octal, your number is: %1d%1d%1d%1d%1d",od1, od2, od3, od4, od5);

    return 0;
}