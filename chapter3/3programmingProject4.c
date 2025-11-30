/*Gian Paraguya, 11/29/2025*/
// "So get away, another way to feel that you didn't want yourself to know and let yourself go~" 


#include <stdio.h>

int main(void){

    int first_third, second_third, third_third;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first_third, &second_third, &third_third);

    printf("You entered %3d.%3d.%4d ", first_third, second_third, third_third);


    return 0;
}
