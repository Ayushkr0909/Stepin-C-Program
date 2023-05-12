#include <stdio.h>

int arr[10] = {};

int binaryToDecimal(int n){

    int i = 0, temp = 0;

    while(n != 0){
        int digit = n % 10;
        arr[i++] = digit;
        n = n/10;
    }

    while(i >= 0){
        temp = (2 * temp) + arr[i--];
    }

    printf("Decimal: %d\n", temp);
}

int octalToDecimal(int n){

    int i = 0, temp = 0;

    while(n != 0){
        int digit = n % 10;
        arr[i++] = digit;
        n = n/10;
    }

    while(i >= 0){
        temp = (8 * temp) + arr[i--];
    }

    printf("Decimal: %d", temp);
}

int main(){

    int n;

    printf("Enter the number: ");
    scanf("%d", &n);
    
    binaryToDecimal(n);
    octalToDecimal(n);

}