#include <stdio.h>

int main(void){
    int un, result; //un --> user num

    printf("Enter a number: ");
    scanf("%d", &un);
    
    if(un <= 9){
        result = 1;
    } 
    else if(un <= 99){
        result = 2;
    }
    else if(un <= 999){
        result = 3;
    }
    else if(un <= 9999){
        result = 4;
    }
    else{
        printf("Your number has 5 or more digits.");
    }

    printf("The number %d has %d digits.\n", un, result);

    return 0;
}