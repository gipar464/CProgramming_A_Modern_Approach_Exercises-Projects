#include <stdio.h>

int main(void){
    int fmonth, fday, fyear; //f = first
    int smonth, sday, syear; //s = second

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &fmonth, &fday, &fyear);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &smonth, &sday, &syear);

    if(fyear < syear){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", fmonth, fday, fyear, smonth, sday, syear);
    }
    else if(fyear == syear){
        if(fmonth < smonth){
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", fmonth, fday, fyear, smonth, sday, syear);
        }
        else if(fmonth == smonth){
            if(fday < sday){
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", fmonth, fday, fyear, smonth, sday, syear);
            }
            else if(fday == sday){
                printf("They are exactly the same date.");
            }
            else if(fday > sday){
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", smonth, sday, syear, fmonth, fday, fyear);
            }
        }
        else if(fmonth > smonth){
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", smonth, sday, syear, fmonth, fday, fyear);
        }
    }
    else if(fyear > syear){
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", smonth, sday, syear, fmonth, fday, fyear);
    }



    return 0;
}