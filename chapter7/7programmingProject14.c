/* 01/02/2026 */

#include <stdio.h>
#include <math.h>

int main(void){
    double x, y1, y2, result;
    
    y1 = (double)1.0; //initial guess
    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do{
        y2 = (y1 + (x/y1)) / (double) 2;
        y1 = y2;
    } while(fabs((y1 - y2)) >= (0.00001 * y2));
    
    result = y2;
    
    printf("Square root: %lf\n", result);
    return 0; 
}
