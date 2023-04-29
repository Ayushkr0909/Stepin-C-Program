#include <stdio.h>

int main(){

    int a, b, c, result =0;

    printf("Enter a, b and c: \n");

    scanf("%d%d%d", &a, &b, &c);

    result = a + b * c;

    printf("Result is: %d", result);

    return 0;
}