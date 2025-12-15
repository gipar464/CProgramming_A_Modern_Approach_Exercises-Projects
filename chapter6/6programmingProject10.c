#include <stdio.h>

int main(void){
    int month, day, year;
    int earliestMonth, earliestDay, earliestYear;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    earliestMonth = month;
    earliestDay = day;
    earliestYear = year;

    while(month != 0 && day != 0 && year != 0){
        if(earliestYear > year){
            earliestMonth = month;
            earliestDay = day;
            earliestYear = year;
        }
        else if(earliestMonth > month){
            earliestMonth = month;
            earliestDay = day;
            earliestYear = year;   
        }
        else if(earliestDay > day){
            earliestMonth = month;
            earliestDay = day;
            earliestYear = year;
        }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
    }

    printf("%.2d/%.2d/%.2d is the earliest date.\n", earliestMonth, earliestDay, earliestYear);
    return 0;
}


/*


*/
