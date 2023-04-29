#include <stdio.h>

int main(){

    float tc, tf;

    printf("Enter temperature in celcius: ");
    scanf("%f", &tc);

    tf = (tc * 9 / 5 + 32);

    printf("Temperature in fahrenheit is: %f", tf);

    return 0;
}