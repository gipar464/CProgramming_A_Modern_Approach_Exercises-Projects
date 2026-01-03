/* 12/30/2025 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch, firstInitial; 
    
    printf("Enter a first and last name: ");

    // skips all the initial blank spaces at the beginning of the input, if any 
    do{
        ch = getchar();
        if(ch != ' '){
            firstInitial = ch;
            break;
        }
    } while(ch == ' '); 

    // skips the white space after the first name
    do{
        ch = getchar();
    } while(ch != ' ');

    // prints out the last name
    do{
      ch = getchar();
      if(ch != ' '){
          putchar(ch);
      } 
    } while(ch != '\0'); 
   
   
    printf(", %c.\n", firstInitial);
    return 0;



}
