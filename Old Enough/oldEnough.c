#include <stdio.h>
#include <stdbool.h>

int age = 19;

int main(void){
    if (age >= 18){
        printf("You are old enough to vote!");
    }else if (age >= 16){
        printf("You are old enough to drive!");
    }else if (age >= 15){
        printf("You are old enough to get a learners permit!");
    }else if (age >= 5){
        printf("You are old enough to go to school!");
    }else{
        printf("You are too young to go to school!");
    }
    return 0;
}