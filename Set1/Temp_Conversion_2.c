#include <stdio.h>

int main(){

    float tc, tf;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &tf);

    tc = (tf - 32) * 5/9;

    printf("Temperature in fahrenheit is: %f", tc);

    return 0;
}