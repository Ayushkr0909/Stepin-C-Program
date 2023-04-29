#include <stdio.h>

int main(){

    int a, b, temp;

    printf("Enter numbers a and b: ");
    scanf("%d%d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("The swapped numbers are: %d, %d", a, b);

    return 0;
}