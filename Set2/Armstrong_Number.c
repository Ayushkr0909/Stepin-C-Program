#include <stdio.h>
#include <math.h>

int main(){

    int n;

    printf("Enter the number to be checked: ");
    scanf("%d", &n);

    int temp = n, noOfDigits = 0;
    while(temp != 0){
        noOfDigits++;
        temp = temp/10;
    }
    printf("Number of digits: %d\n", noOfDigits);

    int temp1 = n; 
    double sumOfCubes = 0;
    while(temp1 != 0){
        int digit = temp1 % 10;
        sumOfCubes = sumOfCubes + pow(digit, noOfDigits);
        temp1 = temp1/10;
    }

    if(sumOfCubes == n)
        printf("%d is an armstrong number", n);
    else
        printf("%d is not an armstrong number", n);
    
    return 0;
}