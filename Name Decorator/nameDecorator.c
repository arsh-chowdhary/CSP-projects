#include <stdio.h>

int main(void){

    char name[20];
    char decorationFirst[4] = "<<< ";
    char decorationSecond[4] = " >>>";
    printf("What is your name? \n");
    scanf("%s", name);
    strcat(decorationFirst + name + decorationSecond);
    printf("%s\n", name);

    return 0;
    
}