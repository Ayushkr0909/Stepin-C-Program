#include <stdio.h>

int main(){

    char str[100];

    printf("Enter a string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++){

        /*ASCII of A-Z = 65 - 90
                   a-z = 97 - 122*/

        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }

    printf(str);
}