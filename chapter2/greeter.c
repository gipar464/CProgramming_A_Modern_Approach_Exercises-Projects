#include <stdio.h>

int main(void){
    char name[64];
    int age;

    printf("What's your name? ");
    if(scanf("%63s", name) != 1){
        return 1;
    }

    printf("How old are you? ");
    if(scanf("%d", &age) !=  1){
        return 1;
    }

    printf("\nHi, %s! Next year you'll be %d.\n", name, age + 1);
    return 0;
}
