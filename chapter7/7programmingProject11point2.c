/* 01/02/2026 */

#include <stdio.h>

int main(void){
    char letter, checker;
    
    printf("Please enter a first and a last name: ");
    
    do{
        scanf("%c", &checker);  //checks if letter scanned is white space or not. if yes, then it won't print anything 
        if(checker != ' '){
            letter = checker;
            printf("%c", letter);
        }
    } while(letter != '\n');

    return 0;
}
