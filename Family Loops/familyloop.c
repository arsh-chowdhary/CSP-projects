#include <stdio.h>

char family[4][20] = {"Harry", "Nicky", "Simar", "Arsh"};
int i;
int main(){
    for (i=0; i < 4; i++){
        printf("Hello, %s\n", family[i]);
    }
    return 0;
}