/* 01/02/2026 */

#include <stdio.h>

int main(void){
    char letter;

    printf("Please enter a first and a last name: ");
    
    while(getchar() != ' ');

    do{
        scanf("%c", &letter);
        printf("%c", letter);
    } while(letter != '\n');

    return 0;
}
