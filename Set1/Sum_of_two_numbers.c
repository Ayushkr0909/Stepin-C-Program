#include <stdio.h>

int main(){

    int a,b,c = 0;
    
    printf("Enter two numbers a and b: \n");

    scanf("%d%d", &a, &b);

    c = a + b;

    printf("Sum of the numbers is: %d", c);

    return 0;
}