#include <stdio.h>

int main(){

    int number, reverse;

    printf("Enter three digit number: ");
    scanf("%d", &number);

    int a = number/100;
    int b = (number%100) / 10;
    int c = number % 10;

    reverse = c*100 + b*10 + a;

    printf("Reversed number is: %d", reverse);

    return 0;
    
}