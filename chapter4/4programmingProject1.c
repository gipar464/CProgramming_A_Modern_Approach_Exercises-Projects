//Gian Paraguya
//12-06-2025

#include <stdio.h>

int main(void){
    int d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &d1, &d2);                  
                                              
    printf("The reversal is: %d%d", d2, d1);

    return 0;
}


/*

I made a mistake on line 10 where I didn't specify how many characters each %d should have,
so I would just write scanf("%d%d", &d1, &d2). When running this program, the program
will keep waiting until you enter two different numbers, like 28 and 29, however we only want
a single two-digit number, so the program will continue to run forever until you forcefully
close it. 

*/