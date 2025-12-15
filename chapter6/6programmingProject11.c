#include <stdio.h>

int main(void){
    float n, e = 1.0f;

    printf("Enter a number: ");
    scanf("%f", &n);
    for(float i = 1.0f; i <= n; ++i){
        e += (1/i); 
    }

    printf("e is approximately %f.\n", e);
    return 0;
}