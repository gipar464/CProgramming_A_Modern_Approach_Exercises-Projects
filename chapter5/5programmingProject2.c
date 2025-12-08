#include <stdio.h>

int main(void){
    int uHours, minutes; //uHours = user Hours/Mins
    int rHours; //rHours/Mins = result Hours

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &uHours, &minutes);

    if(uHours > 12 && uHours < 25){
        rHours = uHours - 12;
    } 
    else if(uHours <= 12 && uHours > 0){
        rHours = uHours;
    } 
    else{
        printf("Invalid time. (Use 24-hour clock.)");
    }

    printf("Equivalent 12-hour time: %d:%.2d", rHours, minutes);


    return 0;
}