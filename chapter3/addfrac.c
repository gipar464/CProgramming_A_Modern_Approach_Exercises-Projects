/* This program simply adds two fractions.
   Gian Paraguya, 10/18/2025 */


   #include <stdio.h>

   int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1; //this is "cross-multiply-divide (just like how you taught Kolbe!)"

    result_denom = denom1 * denom2;  //common denominator

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
   }