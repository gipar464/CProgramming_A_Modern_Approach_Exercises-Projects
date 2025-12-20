#include <stdio.h>

int main(void){
    float n, e = 1.0f;
    float factorial = 1.0f; 

    printf("Enter a number: ");
    scanf("%f", &n);

    for(float j = n; j > 0; --j){
        for(int i = 1; i <= n; ++i){
            factorial *= i;
        }
        e += (1/factorial);
    }

    printf("e is approximately %f.\n", e);
    return 0;
}
