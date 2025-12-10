#include <stdio.h>

int main(void){
    int nfd, nsd; //stands number first digit and number second digit, respectively

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &nfd, &nsd);

    switch(nfd){
        case 0: printf("You entered the number zero-"); break;
        case 1:
            if(nsd == 1){
                printf("You entered the number eleven.");
                return 0;
            }
            else if(nsd == 2){
                printf("You entered the number twelve.");
                return 0;
            }
            else{
                break;
            }
        case 2: printf("You entered the number twenty-"); break;
        case 3: printf("You entered the number thirty-"); break;
        case 4: printf("You entered the number forty-"); break;
        case 5: printf("You entered the number fifty-"); break;
        case 6: printf("You entered the number sixty-"); break;
        case 7: printf("You entered the number seventy-"); break;
        case 8: printf("You entered the number eighty-"); break;
        case 9: printf("You entered the number ninety-"); break;
    }

    switch(nsd){
        case 0: printf("zero."); break;
        case 1: printf("one."); break;
        case 2: printf("two."); break;
        case 3:
            if(nfd == 1){
                printf("You entered the number thirteen.");
                break;
            } else{
                printf("three."); 
                break;
            }
        case 4: 
            if(nfd == 1){
                printf("You entered the number fourteen.");
                break;
            } else{
                printf("four."); 
                break;
            }            
        case 5: 
            if(nfd == 1){
                printf("You entered the number fifteen.");
                break;
            } else{
                printf("five."); 
                break;
            }
        case 6: 
            if(nfd == 1){
                printf("You entered the number sixteen.");
                break;
            } else{
                printf("six."); 
                break;
            }
        case 7:
            if(nfd == 1){
                printf("You entered the number seventeen.");
                break;
            } else{
                printf("seven."); 
                break;
            }
        case 8:
            if(nfd == 1){
                printf("You entered the number eighteen.");
                break;
            } else{
                printf("eight."); 
                break;
            }
        case 9:
            if(nfd == 1){
                printf("You entered the number nineteen.");
                break;
            } else{
                printf("nine."); 
                break;
            }
    }

    return 0;
}