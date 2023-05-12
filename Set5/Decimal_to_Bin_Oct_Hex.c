#include <stdio.h>

int arr[10] = {};

int decimalToBinary(int n){

    int i = 0;

    while(n != 0){

        arr[i++] = n % 2;
        n = n/2;
    }
    printf("Binary conversion is: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d ", arr[j]);
    }
    printf("\n");
    
}

int decimalToOctal(int n){

    int i = 0;

    while(n != 0){

        arr[i++] = n % 8;
        n = n/8;
    }
    printf("Octal conversion is: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d ", arr[j]);
    }
    printf("\n");
}

int decimalToHexa(int n){

    int i = 0, octal;
    char hexaArr[10];

    while (n != 0) {
        octal = n % 16;

        // check if rem < 10 : Digits : 0 - 9
        // ascii 0 : 48   
        if (octal < 10)
            hexaArr[i++] = octal + 48;

        // else positional values : A - F 
        // rem value will be > 10, adding 55 will result : A - F 
        // ascii A : 65, B : 66 ..... F : 70 
        else
            hexaArr[i++] = octal + 55;
    
        n = n / 16;
    }

    printf("Hexadecimal value is: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexaArr[j]);
    
    printf("\n");
}

int main(){

    int n;

    printf("Enter the number: ");
    scanf("%d", &n);
    
    decimalToBinary(n);
    decimalToOctal(n);
    decimalToHexa(n);
}