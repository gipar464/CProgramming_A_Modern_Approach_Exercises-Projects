#include <stdio.h>

int main(void){
    float loanAmount, interestRate, monthlyPayment, balance;
    int numPayments;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    printf("Enter number of payments: ");
    scanf("%d", &numPayments);

    interestRate = (interestRate/100)/12;
    balance = loanAmount;


    for(int i = 1; i <= numPayments; ++i){
        balance = (balance - monthlyPayment) + (balance * interestRate);
        printf("Balance remaining after payment number %d: $%.2f\n", i, balance);
    }



    return 0;
}