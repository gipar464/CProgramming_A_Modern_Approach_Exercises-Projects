//Gian Paraguya, 10/14/2025

#include <stdio.h>

int main(void){
    float tax = 0.05f;
    int dollars;
    float cents;
    float subTotal;
    float totalWithTax;

    printf("Hello, user! Please enter the amount of dollars your bill is: ");
    scanf("%d", &dollars);
    printf("Perfect! You have %d amount of dollars in your bill. Now, just please enter the amount of cents you have in your bill as a decimal: ", dollars);
    scanf("%f", &cents);
    printf("Okay, so you have $%.2f amount of cents in your bill. ", cents);

    subTotal = dollars + cents; 
    totalWithTax = (subTotal * tax) + subTotal;

    printf("After applying the 5 percent tax, you now have a bill of $%.2f.", totalWithTax);


    return 0;
}
