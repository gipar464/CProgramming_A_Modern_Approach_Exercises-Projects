/*Gian Paraguya, 11/29/2025*/


#include <stdio.h>

int main(void){
    
    int itemNum, unitPrice, month, day, year;

    printf("Enter item number: ");
    scanf("%d", &itemNum);

    printf("Enter unit price: ");
    scanf("%d", &unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit Price\tPurchase Date\n");
    printf("%d\t$%.7d\t%.2d/%.2d/%.4d\n", itemNum, unitPrice, month, day, year);

    return 0; //don't forget this! it's needed because the main function is an int type.
}