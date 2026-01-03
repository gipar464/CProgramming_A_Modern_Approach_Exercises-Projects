/* 01/02/2026 */

#include <stdio.h>
#include <math.h>

int main(void){
    double x, y, result;
    
    y = 1; //initial guess
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do{
        result = (y + (x/y)) / 2;
        y = result;
    } while(fabs((y - result)) >= (0.00001 * y));
    
    
    printf("Square root: %lf\n", result);
    return 0; 
}
