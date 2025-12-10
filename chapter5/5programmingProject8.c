/*
Now, there is a way to fix the [PLACEHOLDER] in the printed results, but it's really messy
and I don't like coding like that. I could either print the result in every single if statement
or I could import the string library and use a string, but I haven't learned strings thus far in
chapter 5.

*/

#include <stdio.h>

int main(void){
    //uHours means user inputted hours
    //dtHours/Mins or atHours/Mins means departure time/arrival time
    int uHours, mins, cUTime; //converted user time
    int c8am, c9am, c11am, c12pm, c2pm, c3pm, c7pm, c9pm; //c stands for converted
    int departureTimeHours, departureTimeMins, arrivalTimeHours, arrivalTimeMins; 
    
    printf("Enter a time (using 24-clour clock): ");
    scanf("%d:%d", &uHours, &mins);
    if(uHours > 24 || mins > 60){
        printf("INVALID INPUT\n");
        return 0;
    }

    cUTime = (uHours * 60) + mins;
    c8am = 8 * 60;
    c9am = (9 * 60) + 43;
    c11am = (11 * 60) + 19;
    c12pm = (12 * 60) + 47;
    c2pm = (14 * 60);           //because 2pm is 14 o'clock
    c3pm = (15 * 60) + 45;
    c7pm = (19 * 60);
    c9pm = (21 * 60) + 45;
    
    
    if(cUTime < (c9am + c8am)/2){
        departureTimeHours = 8;
        departureTimeMins = 0;
        arrivalTimeHours = 10;
        arrivalTimeMins =  16;
    }
    else if(cUTime < (c11am + c9am)/2){
        departureTimeHours = 9;
        departureTimeMins = 43;
        arrivalTimeHours = 11;
        arrivalTimeMins =  52;
    }
    else if(cUTime < (c12pm + c11am)/2){
        departureTimeHours =11;
        departureTimeMins = 19;
        arrivalTimeHours = 1;
        arrivalTimeMins =  31;
    }
    else if(cUTime < (c2pm + c12pm)/2){
        departureTimeHours = 12;
        departureTimeMins = 47;
        arrivalTimeHours = 3;
        arrivalTimeMins =  0;
    }
    else if(cUTime < (c3pm + c2pm)/2){
        departureTimeHours = 2;
        departureTimeMins = 0;
        arrivalTimeHours = 4;
        arrivalTimeMins =  8;
    }
    else if(cUTime < (c7pm + c3pm)/2){
        departureTimeHours = 3;
        departureTimeMins = 45;
        arrivalTimeHours = 5;
        arrivalTimeMins =  55;
    }
    else if(cUTime < (c9pm + c7pm)/2){
        departureTimeHours = 7;
        departureTimeMins = 0;
        arrivalTimeHours = 9;
        arrivalTimeMins =  20;
    }
    else if(cUTime <= 1440){
        departureTimeHours = 9;
        departureTimeMins = 45;
        arrivalTimeHours = 11;
        arrivalTimeMins =  58;
    }
    

    //demonstration of multiline string quotation concatenation
    printf("Closest deparure time is: %d:%.2d [PLACEHOLDER]," 
            "arriving at %d:%.2d [PLACEHOLDER]. \n",
            departureTimeHours, departureTimeMins, arrivalTimeHours, arrivalTimeMins);



    
    





    


    
   










    return 0;
}