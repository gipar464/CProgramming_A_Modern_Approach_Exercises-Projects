/* 12/30/2025 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch; 

    printf("Enter a first and last name: ");
    
    ch = getchar();
    while(ch != '\n'){
        ch = getchar();
        if(ch != ' '){
            putchar(ch);
        }
    }

    return 0;
}
