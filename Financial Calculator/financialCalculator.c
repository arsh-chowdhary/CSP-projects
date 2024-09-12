#include <stdio.h>

int main(void){

    float income, rent, utilities, groceries, transportation, expenses, savings, total;
    float prent, putilities, pgroceries, ptransportation, pexpenses; //p means percentage

    printf("This is going to calculate your budget for the month\n");

    printf("How much do you make a month?\n");
    scanf("%f", &income);

    printf("How much is your rent?\n");
    scanf("%f", &rent);

    printf("How much are your utilities?\n");
    scanf("%f", &utilities);

    printf("How much do you spend on groceries?\n");
    scanf("%f", &groceries);

    printf("How much do you spend on transportation?\n");
    scanf("%f", &transportation);

    expenses = rent + utilities + groceries + transportation;
    savings = income * .2;
    total = income - expenses - savings;

    prent = rent / income;
    putilities = utilities / income;
    pgroceries = groceries / income;
    ptransportation = transportation / income;
    pexpenses = expenses / transportation;


    printf("Your income is: $%.2f/n", income); //f is float .2 is how many decimal points
    printf("Your expenses are: $%.2f/n", expenses);
    printf("Your savings are: $%.2f/n", savings);
    printf("Your total left to spend is $%.2f/n", total);

    printf("Your rent is %.2f", prent, "of your income/n");
    printf("Your utilities are %.2f", putilities, "of your income/n");
    printf("Your groceries are %.2f", pgroceries, "of your income/n");
    printf("Your transportation is %.2f", ptransportation, "of your income/n");
    

    return 0;
    
}