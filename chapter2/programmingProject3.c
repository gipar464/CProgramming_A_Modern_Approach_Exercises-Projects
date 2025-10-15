#include <stdio.h>

int main(void){
    float volume;
    float fractionConstant = 4.0f/3.0f;
    float pi = 3.141596;
    int radius;

    printf("Hello, user! Please enter an integer for the radius of a sphere. ");
    scanf("%d", &radius);

    volume = fractionConstant * pi * radius * radius * radius;

    printf("The volume calculated is: %f\n", volume);  //I got a negative number as the final volume, so I need to know the value of volume
    printf("Got it, you chose %d as your radius; therefore, the volume of the sphere is %f.\n", radius, volume);
    /*I made a mistake here. I mistakenly used %d instead of %f for the volume in my print statement.*/

    return 0;
}