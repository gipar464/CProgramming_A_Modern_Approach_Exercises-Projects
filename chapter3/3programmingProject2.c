/*Gian Paraguya, 11/29/2025*/


#include <stdio.h>

int main(void){
    
    int itemNum, unitPrice, month, day, year;

    printf("Enter item number:\n ");
    scanf("%d", &itemNum);

    printf("Enter unit price:\n ");
    scanf("%d", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy):\n ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%d\t$%7.2d\t%.2d/%.2d/%.4d\n", itemNum, unitPrice, month, day, year);


}