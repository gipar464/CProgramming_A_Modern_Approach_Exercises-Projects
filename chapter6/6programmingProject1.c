#include <stdio.h>

int main(void){
    float n, max;
    // max = n;
    do{
        printf("Enter a number: ");
        scanf("%f", &n);
        if(max < n){
            max = n;
        }
    } while(n != 0);

    printf("The largest number entered was %f", max);
    
    return 0;
}
