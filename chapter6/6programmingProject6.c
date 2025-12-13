#include <stdio.h>

int main(void){
    int n, i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &n);
    j = 2;
    while(1){
        if(i > n){
            return 0;
        } else{
            i = j * j;
            ++j;
            if(i % 2 == 0 && i <= n){
                printf("%d\n", i);
            }
        }
    }
}