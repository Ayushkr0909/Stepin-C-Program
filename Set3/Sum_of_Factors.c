#include <stdio.h>

int main(){

    int n, sum = 0;;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d, ", i);
            sum = sum + i;
        }
    }
    printf("\nSum of factors of %d is: %d", n, sum);

    // a perfect number is a positive integer that is equal to the 
    // sum of its positive divisors, excluding the number itself
    if(n == sum - n)
        printf("\n%d is a perfect number", n);
    else
        printf("\n%d is not a perfect number", n);

    return 0;
}