/* 01/23/2026 */

#include <stdio.h>
#include <ctype.h>

int main(void){
    char message[9999]; 
    int i = 0;
    char ch; 

    printf("Enter message: ");
    
    do{
        ch = getchar();
        message[i] = ch;
        i++;
    }while(ch != '\n');


    for(int j = 0; j < i; ++j){
        switch(toupper(message[j])){
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                printf("%c", toupper(message[j]));
                break;
        }
    }
   

    return 0;
}
