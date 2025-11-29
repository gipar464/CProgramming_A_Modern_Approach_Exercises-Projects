//Gian Paraguya, 11/29/2025
//Adding a 3 before the name (3programmingProject1.c) because it's in chapter 3
//Also note, this program is not strict about the user input, which is something that can be improved on


#include <stdio.h>

int main(void){

    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("You entered the date %.4d%.2d%.2d", year, month, day);
}