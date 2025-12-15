#include <stdio.h>

int main(void){
    float e = 1.0f;
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        e += (1/i); 
    }

    printf("e is approximately %f.\n", e);
    return 0;
}