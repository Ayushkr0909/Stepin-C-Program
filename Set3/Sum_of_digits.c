#include <stdio.h>

int sum(int n){

    while(n / 10 > 0){

        int sum = 0;
        while(n != 0){
        int digit = n % 10;
        sum = sum + digit;
        n = n/10;
        }

        n = sum; 
    }
       
}

int main(){

    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int root = sum(n);

    printf("root of digits is: %d", root);

    return 0;
}