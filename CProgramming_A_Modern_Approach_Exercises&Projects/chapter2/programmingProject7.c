/* Gian Paraguya, 10/14/2025 */
/* I am personally proud of this project. 
   I was able to solve it myself without any help. 
   Albeit, it wasn't that hard, but I'm just glad that I'm making progress.
   I hope I'm able to see how much growth I can do until summer 2026.*/

#include <stdio.h>

int main(void){
    
    int dollarAmount;
    int twentyDollarBills;
    int tenDollarBills;
    int fiveDollarBills;
    int oneDollarBills;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollarAmount);

    twentyDollarBills = dollarAmount/20;
    dollarAmount -= twentyDollarBills * 20;

    tenDollarBills = dollarAmount/10;
    dollarAmount -= tenDollarBills * 10;

    fiveDollarBills = dollarAmount/5;
    dollarAmount -= fiveDollarBills * 5;

    oneDollarBills = dollarAmount;
    dollarAmount -= oneDollarBills;

    printf("$20 bills: %d\n", twentyDollarBills);
    printf("$10 bills: %d\n", tenDollarBills);
    printf("$5 bills: %d\n", fiveDollarBills);
    printf("$1 bills: %d\n", oneDollarBills);

    return 0;
}