#include <stdio.h>

int main(void){
    int numDays, startingDay;

    printf("Enter number of days in month: ");
    scanf("%d", &numDays);
    printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &startingDay);

    //initial spacing in calendar
    for(int i = 0; i < startingDay; ++i){
        printf("   ");  //3 spaces for the two numbers that it fills plus a space between each entry
    }

    //printing out every day in the calendar
    for(int i = 1; i <= numDays; ++i){
        printf("%2d ", i);  //%2d for numbers to be right justified
        if((i + startingDay) % 7 == 0){
            printf("\n");
        }
    }
    return 0;
}