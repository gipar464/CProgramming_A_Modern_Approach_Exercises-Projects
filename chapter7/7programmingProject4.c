/* Program that translates an alphabetic phone number into numeric form
 * 12/25/2025 (christmas day btw!) */

// Enter a phone number: CALLATT
// Output should be: 2255288

#include <stdio.h>

int main(void){
    char ch;

    printf("Enter phone number: ");
    
    do{
        ch = getchar();

        switch(ch){
            case 'A':
            case 'a':
            case 'B':
            case 'b':
            case 'C':
            case 'c':
                printf("2");
                break;
            case 'D':
            case 'd':
            case 'E':
            case 'e':
            case 'F':
            case 'f':
                printf("3");
                break;
            case 'G':
            case 'g':
            case 'H':
            case 'I':
            case 'i':
                printf("4");
                break;
            case 'J':
            case 'j':
            case 'K':
            case 'k':
            case 'L':
            case 'l':
                printf("5");
                break;
            case 'M':
            case 'm':
            case 'N':
            case 'n':
            case 'O':
            case 'o':
                printf("6");
                break;
            case 'P':
            case 'p':
            case 'Q':
            case 'q':
            case 'R':
            case 'r':
            case 'S':
            case 's':
                printf("7");
                break;
            case 'T':
            case 't':
            case 'U':
            case 'u':
            case 'V':
            case 'v':
                printf("8");
                break;
            case 'W':
            case 'w':
            case 'X':
            case 'x':
            case 'Y':
            case 'y':
            case 'Z':
            case 'z':
                printf("9");
                break;
            default:
                putchar(ch);
        }
    } while(ch != '\n'); 
    
    return 0;
}
