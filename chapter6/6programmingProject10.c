#include <stdio.h>

int main(void){
    int fmonth, fday, fyear, smonth, sday, syear, earliestMonth, earliestDay, earliestYear;
    printf("Enter a date: (mm/dd/yy): ");
    scanf("%d/%d/%d", &fmonth, &fday, &fyear);
    earliestMonth = fmonth;
    earliestDay = fday;
    earliestYear = fyear;

    do{
        if(fmonth == 0 && fday == 0 && fyear == 0){
            printf("%d/%d/%d is the earliest date\n", earliestMonth, earliestDay, earliestYear);
            return 0;
        }
        else if(fmonth == 0 || fday == 0 || fyear == 0){
            printf("INVALID DATE.\n");
        }
        printf("Enter a date: (mm/dd/yy): ");
        scanf("%d/%d/%d", &smonth, &sday, &syear);

        if(fyear < syear){
            earliestMonth = fmonth;
            earliestDay = fday;
            earliestYear = fyear;
        }
        else if(fyear == syear){
            if(fmonth < smonth){
                earliestMonth = fmonth;
                earliestDay = fday;
                earliestYear = fyear;
            }
            else if(fmonth == smonth){
                if(fday < sday){
                    earliestMonth = fmonth;
                    earliestDay = fday;
                    earliestYear = fyear;
                }
                else if(fday == sday){
                    printf("They are exactly the same date.");
                }
                else if(fday > sday){
                    earliestMonth = smonth;
                    earliestDay = sday;
                    earliestYear = syear;
                }
            }
            else if(fmonth > smonth){
                earliestMonth = smonth;
                earliestDay = sday;
                earliestYear = syear;
            }
        }
        else if(fyear > syear){
            earliestMonth = smonth;
            earliestDay = sday;
            earliestYear = syear;
        }
    } while(1);
}