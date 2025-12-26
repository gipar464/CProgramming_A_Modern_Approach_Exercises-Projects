/* Prints a table of squares */

#include <stdio.h>

int main(void){
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);

	for(i = 0; i < n; ++i){
		printf("%10d%10d\n", i, i * i);
		if(i % 24 == 0){
			do{
				printf("Press ENTER to continue...\n");
				getchar();
			} while(getchar() != ' ');	
		} 
	}

	return 0;
}
