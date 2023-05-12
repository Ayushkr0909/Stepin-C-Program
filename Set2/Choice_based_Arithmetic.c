#include <stdio.h>

int main(){
    
    int a, b, result;
    char operator;

    printf("Enter Operand1 operator operand2: ");
    scanf("%d %c %d", &a, &operator, &b);

    if(operator == '+')
        result = a + b;
    else if(operator == '-')
        result = a - b;
    else if(operator == '*')
        result = a * b;
    else if(operator == '/')
        result = a / b;
    else if(operator == '%')
        result = a % b;

    printf("Solution is: %d", result);

    return 0;
}