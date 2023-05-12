#include <stdio.h>
#include <stdbool.h>

int main(){

    char alphabet;
    bool isVowel = 0;

    printf("Enter the alphabet: ");
    scanf("%c", &alphabet);

    switch(alphabet){

        case 'a': isVowel = 1;
        case 'e': isVowel = 1;
        case 'i': isVowel = 1;
        case 'o': isVowel = 1;
        case 'u': isVowel = 1;
        case 'A': isVowel = 1;
        case 'E': isVowel = 1;
        case 'I': isVowel = 1;
        case 'O': isVowel = 1;
        case 'U': isVowel = 1;

    }
    if(isVowel)
        printf("%c ia a vowel", alphabet);
    else
       printf("%c ia a consonant", alphabet); 

    return 0;
}