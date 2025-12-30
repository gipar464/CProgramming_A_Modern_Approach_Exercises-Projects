/* 12/28/25 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    int hours, minutes;    
    
    do {
        printf("Enter a time: ");
        scanf("%d:%d", hours, minutes);
       
        if(hours > 13 || hours < 0 || minutes > 60 || minutes < 0){
            printf("Enter a valid time using the 12-hour clock: ");
            scanf("%d:%d", hours, minutes);
        } else{
            break; 
        }

    } while(1);

    return 0;
}
