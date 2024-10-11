#include <stdio.h>

char names[4][20] = {"Bob", "Barry", "Tim", "Jake"};
int i;
int main (){
    while (i < 8){
        printf("%s LastName\n", names[i]);
        i+=1;
    }
    return 0;
}