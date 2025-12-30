/* 12/28/25 */
/* does not currently check for errors */

#include <stdio.h>
#include <ctype.h>

int main(void){
    int hours, minutes;   
    int convertedTime;
    char timeSpecification; 
    int departureTime1, departureTime2, departureTime3, departureTime4, departureTime5, departureTime6, departureTime7, departureTime8; 

    departureTime1 = (8 * 60);
    departureTime2 = (9 * 60) + 43;
    departureTime3 = (11 * 60) + 19;
    departureTime4 = (12 * 60) + 47;
    departureTime5 = (14 * 60);
    departureTime6 = (15 * 60) + 45;
    departureTime7 = (19 * 60);
    departureTime8 = (21 * 60) + 45;


    do {
        printf("Enter a time: ");
        scanf("%d:%d", &hours, &minutes);
       
        if(hours > 13 || hours < 0 || minutes > 60 || minutes < 0){
            printf("Enter a valid time using the 12-hour clock: ");
            scanf("%d:%d", &hours, &minutes);
        } else{
            do{
                convertedTime = (hours * 60) + minutes; //converted time used for calculations
                timeSpecification = getchar();
                switch(timeSpecification){
                    case 'A':
                    case 'a':
                        convertedTime = (hours * 60) + minutes;
                        if(convertedTime < (departureTime2 + departureTime1)/2){
                            printf("Closest departure time is 8:00 a.m., arriving 10:16 a.m.\n");
                        }
                        else if(convertedTime < (departureTime3 + departureTime2)/2){
                            printf("Closest departure time is 9:43 a.m., arriving 11:52 a.m.\n");
                        }
                        else if(convertedTime < (departureTime4 + departureTime3)/2){
                            printf("Closest departure time is 11:19 a.m., arriving 1:31 p.m.\n");
                        }
                        else if(convertedTime < (departureTime5 + departureTime4)/2){
                            printf("Closest departure time is 12:47 p.m., arriving 3:00 p.m.\n");
                        }
                        else if(convertedTime < (departureTime6 + departureTime5)/2){
                            printf("Closest departure time is 2:00 p.m., arriving 4:08 p.m.\n");
                        }
                        return 0;
                    case 'P':
                    case 'p':
                        convertedTime = (12 * 60) + (hours * 60) + minutes;
                        if(convertedTime < (departureTime5 + departureTime4)/2){
                            printf("Closest departure time is 12:47 p.m., arriving 3:00 p.m.\n");
                        }
                        else if(convertedTime < (departureTime6 + departureTime5)/2){
                            printf("Closest departure time is 2:00 p.m., arriving 4:08 p.m.\n");
                        }
                        else if(convertedTime < (departureTime7 + departureTime6)/2){
                            printf("Closest departure time is 3:45 p.m., arriving 5:55 p.m.\n");
                        }
                        else if(convertedTime < (departureTime8 + departureTime7)/2){
                            printf("Closest departure time is 7:00 p.m., arriving 9:20 p.m.\n");
                        }
                        else if(convertedTime > (departureTime8 + departureTime7)/2){
                            printf("Closest departure time is 9:45 p.m., arriving 11:58 p.m.\n");
                        }
                        return 0;
                }

            } while(timeSpecification != '\n'); 
        }

    } while(1);

}
