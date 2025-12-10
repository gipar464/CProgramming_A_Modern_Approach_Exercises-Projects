#include <stdio.h>

int main(void){
    //uHours means user inputted hours
    //dtHours/Mins or atHours/Mins means departure time/arrival time
    int uHours, mins, convertedTime; 
    
    printf("Enter a time (using 24-clour clock): ");
    scanf("%d:%d", &uHours, &mins);
    if(uHours > 24 || mins > 60){
        printf("INVALID INPUT\n");
        return 0;
    }


    
   










    return 0;
}