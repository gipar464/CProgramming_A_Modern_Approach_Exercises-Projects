#include <stdio.h>

int main(void){
    int month, day, year;
    int smonth, sday, syear; //s stands for second (second month, etc);
    int earliestMonth, earliestDay, earliestYear;

    while(1){
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        if(month == 0 && day == 0 && year == 0){
            printf("%.2d/%.2d/%.2d is the earliest date.", earliestMonth, earliestDay, earliestYear);
            return 0;
        } else{
            printf("Enter a date (mm/dd/yy): ");
            scanf("%d/%d/%d", &smonth, &sday, &syear);
        }

        if(year > syear){
            earliestMonth = smonth;
            earliestDay = sday;
            earliestYear = syear;
        }
        else if(year == syear){
            if(month > smonth){
                earliestMonth = smonth;
                earliestDay = sday;
                earliestYear = syear;
            }
        }
    }

}



/*

    if(year < syear){
        //
    }
    else if(year == syear){
        if(month < smonth){
            //
        }
        else if(month == smonth){
            if(day < sday){
                //continue
            }
            else if(day == sday){
                //continue
            }
            else if(day > sday){
                month = smoth;
                day = sday;
                year = syear;
            }
        }
        else if(month > smonth){
            month = smoth;
            day = sday;
            year = syear;
        }
    }
    else if(year > syear){
        month = smoth;
        day = sday;
        year = syear;
    }

*/