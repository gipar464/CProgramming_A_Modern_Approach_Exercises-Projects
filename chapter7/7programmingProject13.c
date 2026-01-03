/* 01/02/26 */

#include <stdio.h>

int main(void){
    float average;
    char ch;
    int wordCount = 1, letterCount = 0; 

    printf("Enter a sentence: ");
    
    do{
        ch = getchar();
        if(ch != ' ' && ch != '\n'){
            ++letterCount;
        }
        else if(ch == ' '){
            ++wordCount;
        }
        else if(ch == '\n'){
            break;
        }
    } while(ch != '\n');
    
    printf("%d %d\n", letterCount, wordCount);    
    average = (float)letterCount/wordCount; 
    printf("Average word length: %f.\n", average);

    return 0;
}
