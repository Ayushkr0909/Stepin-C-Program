#include <stdio.h>

int main(){

    int number, reverse;

    printf("Enter four digit number: ");
    scanf("%d", &number);

    int a = number/1000;
    int b = (number%1000) / 100;
    int c = (number % 100) / 10;
    int d = number % 10;

    reverse = d*1000 + c*100 + b*10 + a;

    printf("Reversed number is: %d", reverse);

    return 0;
    
}