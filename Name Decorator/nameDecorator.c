#include <stdio.h>
#include <string.h>

int main(void){

    char name[20];
    char decorationFirstOne[20] = "<<< ";
    char decorationFirstTwo[20] = " >>>";

    printf("What is your name? \n");
    scanf("%s", name);

    strcat(decorationFirstOne, name);
    strcat(decorationFirstOne, decorationFirstTwo);
    printf("%s\n", decorationFirstOne);


    return 0;
    
}