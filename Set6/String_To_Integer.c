#include <stdio.h>

int main(){

    char str[100];

    printf("Enter String value: ");   //"520"
    gets(str);

    int intValue, res = 0;

    for(int i = 0; str[i] != '\0'; i++){

        // ASCII of 0 - 9 --> 48 - 57

        intValue = str[i] - 48;

        res = res * 10 + intValue;
    }

    printf("Integer value for string: %d", res);
}