/* 01/02/2026 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    char firstNameLetter, lastNameLetter, checker;
    
    printf("Please enter a first and a last name: ");
    
    do{
        scanf("%c", &checker);  //checks if letter scanned is white space or not. if yes, then it won't print anything 
        if(checker != ' '){
            firstNameLetter = checker;
            break;
        }
    } while(1);
    
    while(getchar() != ' '); //skips the rest of the letters in the first name until the blank space is reached 


    do{
        scanf("%c", &checker);
        if(checker != ' ' && checker != '\n'){
            lastNameLetter = checker;
            putchar(lastNameLetter);
        }
        
        checker = toupper(checker); 
        if((checker < 'A' || checker > 'Z') && checker != ' '){
            printf(", %c.", firstNameLetter);
            return 0;
        }
    } while(1);
    
}
