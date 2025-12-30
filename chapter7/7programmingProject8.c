/* 12/28/25 */
/* does not currently check for errors */

#include <stdio.h>
#include <ctype.h>

int main(void){
    int hours, minutes;    
    char timeSpecification; 
    do {
        printf("Enter a time: ");
        scanf("%d:%d", hours, minutes);
       
        if(hours > 13 || hours < 0 || minutes > 60 || minutes < 0){
            printf("Enter a valid time using the 12-hour clock: ");
            scanf("%d:%d", hours, minutes);
        } else{
            do{
                timeSpecification = getchar();
                switch(timeSpecification){
                    case 'A':
                    case 'a':
                        if(//something) 
                        break;
                    case 'P':
                    case 'p':
                        //do something
                        break;
                }

            } while(timeSpecification != '\n'); 
        }

    } while(1);

    return 0;
}
