/* 01/02/26 */

#include <stdio.h>

int main(void){
    float average;
    char ch;
    int wordCount = 0, letterCount = 0; 

    printf("Enter a sentence: ");
    
    while(1){
        ch = getchar();
        letterCount++;
        if(ch == ' '){
            wordCount++;
        }
        else if(ch == '\n'){
            break;
        }
    }
    
    average = (float)letterCount/wordCount; 
    printf("Average word length: %f.\n", average);

    return 0;
}
