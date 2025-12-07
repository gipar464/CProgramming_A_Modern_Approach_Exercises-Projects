//Gian Paraguya
//12-06-2025

#include <stdio.h>

int main(void){
    int ui1, ui2, ui3, ui4, ui5, ui6, ui7, ui8, ui9, ui10, ui11;  //ui stands for user input
    int firstSum, secondSum, total, tr;                      //tr stands for total remainder

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
         &ui1, &ui2, &ui3, &ui4, &ui5, &ui6, &ui7, &ui8, &ui9, &ui10, &ui11);

    firstSum = ui1 + ui3 + ui5 + ui7 + ui9 + ui11;
    secondSum = ui2 + ui4 + ui6 + ui8 + ui10;
    total = secondSum + (firstSum * 3);
    total -= 1;
    tr = total % 10;

    printf("The check digit should be: %d", 9 - tr);




    return 0;
}