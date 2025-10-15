//Condense the dweight.c program 
/*Condense the dweight.c program by (1) replacing the assignments to height,
length. and width with initializers and (2) removing the weight variable, instead cal-
culating (volume+ 165) / 166 within the last printf.*/

#include <stdio.h>

int main(void){
    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;
    int weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    // printf("Dimensional weight (pounds): %d\n", weight);
    printf("Dimensional weight (pounds): %d + 165/166", volume);

    return(0); 
}