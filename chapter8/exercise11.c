/* 01/08/2026 */

#include <stdio.h>

int main(void){
    char checker_board[8][8];

    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            checker_board[i][j] = '4'; 
            printf(" %c", checker_board[i][j]);
        }
        printf("\n");
    }


    return 0;
}
