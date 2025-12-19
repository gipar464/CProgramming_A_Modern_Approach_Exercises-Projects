#include <stdio.h>

int main(void){
    float n, e = 1.0f;
    int factorial = 1; 

    printf("Enter a number: ");
    scanf("%f", &n);

    for(int i = 0; i < n; ++i){
        for(int j = 1; j <= factorial; ++j){
            factorial *= j; //not being stored (always being updated and changing values)
        }
        e += 1/factorial;
    }


    printf("e is approximately %f.\n", e);
    return 0;
}