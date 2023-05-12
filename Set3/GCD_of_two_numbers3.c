#include <stdio.h>

int main(){

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("GCD of %d and %d is: ", a, b);

    if(a == 0)
        printf("%d", b);
    if(b == 0)
        printf("%d", a);

    int rem = a % b;
    if(a > 0 && b > 0) {
        while (rem > 0) {
        rem = a % b;
        a = b;
        b = rem;
        }
        printf("%d",a);
    }

    return 0;
}