/* Gian Paraguya, 10/14/2025 */
/* YAY I FINALLY WAS ABLE TO SOLVE IT. THIS TOOK SO LONG TO DO (FINISHED ON 10/15/2025)
   The amount of progress I am making is so insane. I am proud of you, Gian. */

#include <stdio.h>

int main(void){
    float loanAmount, interestRate, monthlyPayment, monthlyInterestRate;
    float balanceAfterFirstPayment, balanceAfterSecondPayment, balanceAfterThirdPayment;
    float tempVar;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    monthlyInterestRate = loanAmount * (interestRate/100)/12;
    printf("The monthly interest rate is: %.3f\n", monthlyInterestRate);
    balanceAfterFirstPayment = loanAmount - monthlyPayment + monthlyInterestRate;
    loanAmount = balanceAfterFirstPayment;
    monthlyInterestRate = loanAmount * (interestRate/100)/12;
    balanceAfterSecondPayment = loanAmount - monthlyPayment + monthlyInterestRate;
    loanAmount = balanceAfterSecondPayment;
    monthlyInterestRate = loanAmount * (interestRate/100)/12;
    balanceAfterThirdPayment = loanAmount - monthlyPayment + monthlyInterestRate;
    loanAmount = balanceAfterThirdPayment;
    monthlyInterestRate = loanAmount * (interestRate/100)/12;
    
    printf("Balance remaining after first payment: %.2f\n", balanceAfterFirstPayment);
    printf("Balance remaining after second payment: %.2f\n", balanceAfterSecondPayment);
    printf("Balance remaining after third payment: %.2f\n", balanceAfterThirdPayment);

    return 0;
}