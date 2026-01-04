/* 01/02/2026 */

#include <stdio.h>
#include <math.h>

int main(void){
    double x, y, result;
    double oldY; 
    y = 1; //initial guess
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    
    do{
        oldY = y;
        result = (y + (x/y))/2;
        y = result;
    } while(fabs(oldY - y) >= (0.0001 * y));
    
    printf("Square root: %lf\n", result);
    return 0; 
}
