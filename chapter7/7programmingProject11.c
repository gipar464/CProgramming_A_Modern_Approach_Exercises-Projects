/* 12/30/2025 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch, firstInitial; 
    int counter = 0;
    
    printf("Enter a first and last name: ");
    
    do{
        firstInitial = getchar();
        ++counter;
    } while(counter < 1);
   
    printf("%c", firstInitial);

    do{
      ch = getchar();
      if(ch != ' '){
         putchar(ch);
      }
    }while(ch != '\n');

    return 0;
}
