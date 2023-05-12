#include <stdio.h>

int main(){

    char alphabet;

    printf("Enter the alphabet: ");
    scanf("%c", &alphabet);

    if(alphabet == 'a' || alphabet == 'e' || 
       alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || 
       alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || 
       alphabet == 'O' || alphabet == 'U')

        printf("%c is a vowel.", alphabet);
    else
        printf("%c is a consonant.", alphabet);

    return 0;
}