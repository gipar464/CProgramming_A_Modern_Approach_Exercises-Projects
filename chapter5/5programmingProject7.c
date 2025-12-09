/*
Write a program that finds the largest and smallest
out of 4 integers given by user. The minimum amount of if-statements needed
to solve this problem is 4. I, however, only managed to do 5.
*/

#include <stdio.h>

int main(void){
    int u1, u2, u3, u4, max, min; //u1, u2, u3, u4 = user numbers

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &u1, &u2, &u3, &u4);

    if(u1 < u2){
        min = u1;
        max = u2;
    }
    if(u3 < min){
       min = u3; 
    }
    if(u4 < min){
        min = u4;
    }
    if(u3 > max){
        u3 = max;
    }
    if(u4 > max){
        u4 = max;
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}



