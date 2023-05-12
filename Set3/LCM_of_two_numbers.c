#include <stdio.h>

int main(){

    int a, b, GCD, LCM;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("LCM of %d and %d is: ", a, b);

    int n1 = a, n2 = b;

    if(n1 == 0)
        GCD = n2;
    if(n2 == 0)
        GCD = n1;

    int rem = n1 % n2;
    if(n1 > 0 && n2 > 0) {
        while (rem > 0) {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
        }
        GCD = n1;
    }
    // LCM = (a/GCD) * b
    LCM = (a/GCD) * b;

    printf("%d", LCM);
}