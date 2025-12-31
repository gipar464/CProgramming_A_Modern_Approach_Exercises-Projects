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
  


    do{
        ch = getchar();
    } while(ch != ' ');

   

    do{
      ch = getchar();
      if(ch != ' '){
         putchar(ch);
      }
      if(ch == '\n'){
          printf(", %c.\n", firstInitial);
      }
    } while(ch != '\n');
    

    return 0;
}
