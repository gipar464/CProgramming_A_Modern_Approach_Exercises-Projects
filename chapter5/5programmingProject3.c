#include <stdio.h>

int main(void){

    int numShares;
    float pps, commission, rivalCommission, value;       //pps = price per share

    printf("Enter number of shares: ");
    scanf("%f", &numShares);
    printf("Enter price per share: ");
    scanf("%f", &pps);

    value = pps * numShares;

    if(value < 2000.00f){
        rivalCommission = 33.00f + 0.03f * value;
    } 
    else if(value < 2500.00f){
        commission = 30.00f + .017f * value;
        rivalCommission = 33.00f + 0.02f * value;
    }
    else if(value < 6250.00f){
        commission = 56.00f + .0066f * value; 
        rivalCommission = 33.00f + 0.02f * value;
    }
    else if(value < 20000.00f){
        commission = 76.00f + .0034f * value;
        rivalCommission = 33.00f + 0.02f * value;
    }
    else if(value < 50000.00f){
        commission = 100.00f + .0022f * value;
        rivalCommission = 33.00f + 0.02f * value;
    }
    else if(value < 500000.00f){
        commission = 155.00f + .0011f * value;
        rivalCommission = 33.00f + 0.02f * value;
    }
    else {
        commission = 255.00f + .0009f * value;
        rivalCommission = 33.00f + 0.02f * value;
    }
    
    if(commission < 39.00f){
        commission = 39.00f;
    }

    printf("Original Commission: $%.2f\n", commission);
    printf("Rival Commission: $%.2f\n", rivalCommission);

    return 0;
}