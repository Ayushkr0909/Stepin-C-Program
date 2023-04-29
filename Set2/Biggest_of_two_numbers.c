#include <stdio.h>

int main(){

    int a, b, big;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    big = a;

    if(b > a){
        big = b;
    }

    printf("The Biggest number is: %d", big);

    return 0;
}