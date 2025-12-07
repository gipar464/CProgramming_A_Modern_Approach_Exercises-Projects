#include <stdio.h>

int main(void){
    int ui1, ui2, ui3, ui4, ui5, ui6, ui7, ui8, ui9, ui10, ui11, ui12, ui13; //ui = user input
    int firstSum, secondSum, total, tr; //tr stands for total remainder

    printf("Enter a 12 digit number: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
    &ui1, &ui2, &ui3, &ui4, &ui5, &ui6, &ui7, &ui8, &ui9, &ui10, &ui11, &ui12);

    firstSum = ui2 + ui4 + ui6 + ui8 + ui10 + ui12;
    secondSum = ui1 + ui3 + ui5 + ui7 + ui9 + ui11;
    total = (firstSum * 3) + secondSum;
    tr = (total - 1) % 10;

    printf("Your check digit is: %d", 9 - tr);
    

    return 0;
}