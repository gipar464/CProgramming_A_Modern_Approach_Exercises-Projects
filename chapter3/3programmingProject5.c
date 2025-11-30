/* Gian Paraguya, 11/29/2025 */

#include <stdio.h>

int main(void){

    int first, second, third, fourth, fifth, sixth, seventh, eigth, ninth, tenth, eleventh, twelvth, thirteenth, fourteenth, fifteenth, sixteenth;
    int firstRowSum, secondRowSum, thirdRowSum, fourthRowSum;
    int firstColumnSum, secondColumnSum, thirdColumnSum, fourthColumnSum;
    int firstDiagonalSum, secondDiagonalSum;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &first, &second, &third, &fourth, &fifth, &sixth, &seventh, &eigth, &ninth, &tenth,
            &eleventh, &twelvth, &thirteenth, &fourteenth, &fifteenth, &sixteenth);

    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n", first, second, third, fourth, fifth, sixth, seventh, eigth,
                ninth, tenth, eleventh, twelvth, thirteenth, fourteenth, fifteenth, sixteenth);

    firstRowSum = first + second + third + fourth;
    secondRowSum = fifth + sixth + seventh + eigth;
    thirdRowSum = ninth + tenth + eleventh + twelvth;
    fourthRowSum = thirteenth + fourteenth + fifteenth + sixteenth;

    firstColumnSum = first + fifth + ninth + thirteenth;
    secondColumnSum = second + sixth + tenth + fourteenth;
    thirdColumnSum = third + seventh + eleventh + fifteenth;
    fourthColumnSum = fourth + eigth + twelvth + sixteenth;

    firstDiagonalSum = first + sixth + eleventh + sixteenth;
    secondDiagonalSum = fourth + seventh + tenth + thirteenth;

    printf("Row sums: %d %d %d %d\n", firstRowSum, secondRowSum, thirdRowSum, fourthRowSum);
    printf("Column sums: %d %d %d %d\n", firstColumnSum, secondColumnSum, thirdColumnSum, fourthColumnSum);
    printf("Diagonal sums: %d %d\n", firstDiagonalSum, secondDiagonalSum);

    
    return 0;
}