#include <stdio.h>

int count(int x){

    int count = 0;
    int temp = x;
    while(x > 0){
        int digit = x % 10;
        count++;
        x/=10;
    }
    return count;
}

int sumOfDigits(int y){

    while(count(y) > 1){

        int sum = 0;
        int rem = y % 10;
        sum = sum + rem;
        y/=10;

        printf("%d ", sum);

        count(sum);
    }
}

int main(){

    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    int sum = 0;
    printf("Number of digits: %d", count);

    printf("\nSum: %d", sumOfDigits(n));
    
    
    return 0;

}