#include <stdio.h>

int main(){

    float SI, principal, duration, ROI;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter duration in years: ");
    scanf("%f", &duration);

    printf("Enter rate of interest in %: ");
    scanf("%f", &ROI);

    SI = (principal * ROI * duration)/100;

    printf("Simple Interest is: %f", SI);

    return 0;
}