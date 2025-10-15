/*Computes the dimensional weight of a box from input provided by the user*/
//Gian Paraguya, 10/14/2025

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void){
    int height;
    int length;
    int width;
    int volume;
    int weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;

    weight = (volume + 165) /166;
    /*The reason why it needs to be volume + 165 is because
      weight was declared as an integer, so it would round down to the nearest
      whole number (truncates). 
    */

    printf("Volume (cubic inches): %d\n ", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
    /*You have to return 0 at the end of the program to terminate it because main is a function.
      The function is of type int: int main(void). So it expects an integer return value.*/
}