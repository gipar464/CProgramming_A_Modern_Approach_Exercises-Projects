#include <stdio.h>

int main(void){
    int digit, rd1, rd2, rd3, reversedNum; //rd stands for reversed digit

    printf("Enter a three-digit number: ");
    scanf("%3d", &digit);


    //assume user input is 385
    rd3 = digit/100;         //should be 3
    rd2 = (digit/10) % 10;   //should be 8
    rd1 = (digit % 100) % 10;       //should be 5

    printf("The reversal is %d%d%d\n", rd1, rd2, rd3);
    return 0;
}



/*

385/100 = 3
385/10 = 38 --> 38 % 10 = 8
385 % 100 = 85

*/