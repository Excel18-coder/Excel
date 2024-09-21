/*
A program to claculate the compound interest
NAME:EXCEL BARAKA
REG NO:CT102/G/21404/24
*/
#include <stdio.h>
#include <math.h>//to solve the power function
int main(){
    float principal,Rate,Time,Interest,amount,compound_interest;
    int compound_frequency;

    printf("Enter the principal amount: ");
    scanf("%f",&principal);

    printf("Enter the rate: ");
    scanf("%f",&Rate);

    scanf("%f",&Time);

    printf("Enter the number of times the interest is compunded: ");
    scanf("%d",&compound_frequency);

    //the formula of calculating compound interest
    amount = principal * ((1 + Rate / (compound_frequency * 100)), (compound_frequency * Time)) ,principal ;
    compound_interest=amount-principal;

    printf("Compound Interest = Ksh. %.2f\n", compound_interest);
    printf("The total amount is = %.2f",amount);
    
     
     return 0;
}