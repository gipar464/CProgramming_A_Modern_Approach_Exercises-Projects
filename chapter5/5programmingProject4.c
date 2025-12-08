#include <stdio.h>

int main(void){

    float windSpeed;

    printf("Enter wind speed (in knots): ");
    scanf("%f", &windSpeed);

    if(windSpeed < 1.0f){
        printf("Calm");
    }
    else if(windSpeed >= 1.0f && windSpeed <= 3.0f){
        printf("Light air");
    }
    else if(windSpeed >= 4 && windSpeed <= 27){
        printf("Breeze");
    }
    else if(windSpeed >= 28 && windSpeed <= 47){
        printf("Gale");
    }
    else if(windSpeed >= 48 && windSpeed <= 63){
        printf("Storm");
    }
    else if (windSpeed > 63){
        printf("Hurricane");
    }





    return 0;
}