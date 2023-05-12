#include <stdio.h>

int main(){

    int basic;

    printf("Enter your Basic pay: ");
    scanf("%d", &basic);

    int da = basic * 15/100;
    int hra = basic * 8/100;
    int gross = basic + hra + da;

    int savings;
    printf("Enter your savings: ");
    scanf("%d", &savings);

    int taxable = 12*(gross - savings);

    int tax;
    // Tax below 2.5 L is Nil
    if(taxable <= 250000)
        tax = 0;

    // Tax upto 2.5 L is nil
    // Tax for amount more than 2.5 L is taxable by 10%
    else if(taxable > 250000 && taxable <= 500000)
        tax = ((taxable - 250000) * 10/100)/12;

    // Tax upto 2.5 L is nil
    // Tax for amount between 2.5 L and 5 L (for 2.5 L) is taxable by 10%
    // Tax for amount more than 5 L is taxable by 20% 
    else if(taxable > 500000 && taxable <= 1000000)
        tax = ((250000 * 10/100) + ((taxable - 500000) * 20/100))/12;

    // Tax upto 2.5 L is nil
    // Tax for amount between 2.5 L and 5 L (for 2.5 L) is taxable by 10%
    // Tax for amount between 5L and 10 L (for 5 L) is taxable by 20%
    // Tax for amount more than 10 L is taxable by 20% 
    else if(taxable > 1000000)
        tax = ((250000 * 10/100) + (500000 * 20/100) + ((taxable - 100000) * 30/100))/12;
   
    int net = gross - tax - savings;

    printf("Your Details are as follows:\nBasic pay: %d\nDA: %d\nHRA: %d\nGross: %d\nSavings: %d\nTaxable: %d\nTax: %d\nNet Income: %d",
            basic, da, hra, gross, savings, taxable, tax, net);

    return 0;
}