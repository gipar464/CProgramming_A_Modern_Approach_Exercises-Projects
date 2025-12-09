/*
Write a program that finds the largest and smallest
out of 4 integers given by user. The minimum amount of if-statements needed
to solve this problem is 3 apparently. I, however, only managed to do 5.
*/

#include <stdio.h>

int main(void){
    int u1, u2, u3, u4, min, max; //u1, u2, u3, u4 = user numbers


    printf("Enter four integers: ");
    scanf("%d %d %d %d", &u1, &u2, &u3, &u4);
    
    /*setting min and max to u1 and u2, respectively, must come first before all
    the if statements because there's a case in which u1 is not less than u2, so the first
    if statement is never evaluated*/
    min = u1;
    max = u2;

    if(u1 > u2){
        min = u2;
        max = u1;
    }
    if(min > u3){
        min = u3;
    }
    if(min > u4){
        min = u4;
    }
    if(max < u3){
        max = u3;
    }
    if(max < u4){
        max = u4;
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}





