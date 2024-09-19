#include <stdio.h>
#include <string.h>

int main(void){

    char name[20];
    char decorationFirst[20] = "<<< ";
    char decorationSecond[20] = " >>>";

    printf("What is your name? \n");
    scanf("%s", name);

    strcat(decorationFirst, name);
    strcat(decorationFirst, decorationSecond);
    printf("%s\n", decorationFirst);

    return 0;
    
}