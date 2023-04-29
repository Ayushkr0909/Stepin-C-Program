#include <stdio.h>

int main(){

    int a, b, c, big;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if(a >= b && a >= c)
        big = a;

    else if(b >= a && b >= c)
        big = b;
        
    else big = c;

    printf("The Biggest number is: %d", big);

    return 0;
}