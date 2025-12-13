#include <stdio.h>

int main(void){
    float loanAmount, interestRate, monthlyPayment, balance;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    interestRate = (interestRate/100)/12;
    balance = loanAmount;

    balance = (balance - monthlyPayment) + (balance * interestRate);
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = (balance - monthlyPayment) + (balance * interestRate);
    printf("Balance remaining after second payment: %.2f\n", balance);

    balance = (balance - monthlyPayment) + (balance * interestRate);
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;
}