#include <stdio.h>
int i;

int main(){
    // Create a loop that counts to 50
    for(i=1;i<=50;i++){
        
    
        // Replace #'s divisible by 3 and 5 with "FizzBuzz"
        if(i%3==0 && i%5==0){
            printf("FizzBuzz\n");
        // Replace #'s divisible by 3 with "Fizz"
        }else if (i%3==0){
            printf("Fizz")
        // Replace #'s divisible by 3 with "Fizz"

        // Replace #'s divisible by 5 with "Buzz"
        }else
        // Print all other numbers

        printf("%d\n", i);
        }
    }
    return 0;
    
}