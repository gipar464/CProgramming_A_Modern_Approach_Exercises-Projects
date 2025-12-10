/*
I couldn't really solve this problem fully.
There are cases where the user can input a three digit number like 100 exactly or 101+,
and my program wouldn't display the grade correctly. Another input would be negative numbers.

*/


#include <stdio.h>

int main(void){
    int g1, g2; //grade 1(first digit) and grade 2(second digit);

    printf("Enter a numerical grade: ");
    scanf("%1d%d", &g1, &g2);

    switch(g1){
        case 0:
        case 1:
        case 2:          //cases 0-5 fallthrough
        case 3:
        case 4:
        case 5:
            printf("Letter grade: F");
        case 6:
            printf("Letter grade: D");
        case 7:
            printf("Letter grade: C");
        case 8:
            printf("Letter grade: B");
        case 9:
            printf("Letter grade: A");
        default:
            printf("INVALID GRADE");
            return 0;
    }


    return 0;
}