#include <stdio.h>

int main(void){

    float income, taxes;

    printf("Enter amount of taxable income: ");
    scanf("%f", &income);

    if(income < 750.00f){
        taxes = income * 0.01f;
    }
    else if(income < 2250.00f){
        if(income > 750.00f){
            taxes = 7.50f + (0.02f * income); 
        }
        if(income == 750.00f){
            taxes = 7.50f + (0.02f * income);
        }
    }
    else if(income < 3750.00f){
        if(income > 2250.00f){
            taxes = 37.50f + (0.03f * income); 
        }
        if(income == 2250.00f){
            taxes = 37.50f + (0.03f * income);
        }
    }
    else if(income < 5250.00f){
        if(income > 3750.00f){
            taxes = 82.50f + (0.04f * income);
        }
        if(income == 3750.00f){
            taxes = 82.50f + (0.04f * income);
        }
    }
    else if(income <= 7000.00f){
        if(income > 5250.00f){
            taxes = 142.50f + (0.05f * income); 
        }
        if(income == 5250.00f){
            taxes = 142.50f + (0.05f * income);
        }
    }
    else if(income > 7000.00f){
        taxes = 230.00f + (0.06f* income);
    }


    printf("Your taxes due are: %f", taxes);







    return 0;
}