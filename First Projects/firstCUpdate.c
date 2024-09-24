#include <stdio.h>

char hello(char name[50]){
    printf("Hello, %s", name);
}

int main(void){
    char name[20];
    (hello("Arsh\n"));
    (hello("Bob\n"));
    (hello("Mike\n"));
    (hello("Bill\n"));
    (hello("John\n"));
    return 0;
    
}