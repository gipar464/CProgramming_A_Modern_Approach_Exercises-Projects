/*Gian Paraguya, 11/29/2025*/
//"is that a compromise? BTW i really wanna stay at your house is a great song :)"

#include <stdio.h>

int main(void){

    int GS1prefix, groupID, publisherCode, itemNum, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1prefix, &groupID, &publisherCode, &itemNum, &checkDigit);

    printf("GS1 prefix: %d\n", GS1prefix);
    printf("Group identifier: %d\n", groupID);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNum);
    printf("Check digit: %d\n", checkDigit);



    return 0;
}