#include <stdio.h>

int main(){
    
    int a, b, result;
    char operator;

    printf("Enter Operand1 operator operand2: ");
    scanf("%d %c %d", &a, &operator, &b);

    switch(operator){
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '/': result = a / b; break;
        case '*': result = a * b; break;
        case '%': result = a % b; break;
    }

    printf("Solution is: %d", result);

    return 0;
}