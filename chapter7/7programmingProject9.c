/* 12/30/2025 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    int hours, minutes;
    char timeSpecification; //for a.m. or p.m.
   
    do{
        printf("Enter a 12-hour time: ");
        scanf("%d:%d", &hours, &minutes);
        if(hours > 12 || hours < 0 || minutes > 60 || minutes < 0){
            printf("Please enter a valid 12-hour time: ");
            scanf("%d:%d", &hours, &minutes);
        } else{
            break;
        }
    } while(1);
   


    do{
        timeSpecification = getchar();
        switch(timeSpecification){
            case 'A':
            case 'a':
                printf("Equivalent 24-hour time: %d:%d\n", hours, minutes); 
                return 0;
            case 'P':
            case 'p':
                hours += 12;
                printf("Equivalent 24-hour time: %d:%d\n", hours, minutes);
                return 0;
        } 
    } while(timeSpecification != '\n');

}
