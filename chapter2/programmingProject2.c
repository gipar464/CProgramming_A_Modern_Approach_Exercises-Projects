//Gian Paraguya, 10/14/2025

#include <stdio.h>

int main(void){
    int radius = 10;
    float fractionConstant = 4.0f/3.0f;
    // int fractionConstant = 4/3; //This is incorrect because it performs integer division, which truncates the answer
    float pi = 3.14159f;
    float volume;

    volume = fractionConstant * pi * radius * radius * radius;
    printf("The volume of a sphere with radius %d is %f\n", radius, volume);
    
    return 0;
}