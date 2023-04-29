#include <stdio.h>

int main(){

    char a, b, c;

    printf("Enter three characters: ");
    scanf("%c%c%c", &a, &b, &c);

    printf("ASCII value of %c is %d\n", a, a);
    printf("ASCII value of %c is %d\n", b, b);
    printf("ASCII value of %c is %d\n", c, c);

    int sum = (int) a + (int) b + (int) c;

    printf("The sum of ASCII values is: %d", sum);

    return 0;
}