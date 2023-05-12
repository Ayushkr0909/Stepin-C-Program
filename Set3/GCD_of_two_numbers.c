#include <stdio.h>

int main(){

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("GCD of %d and %d is: ", a, b);

    if(a == 0)
        printf("%d", b);
    if(b == 0)
        printf("%d", a);

    if(a > 0 && b > 0){

        // set result as min(a,b)
        int result = ((a < b) ? a : b);
        // numbers should be positive and
        // if there is no common factor, then 1 is the GCD
        while (result > 0) {
            // decrement the min. number until it is a factor of both a and b
            // (Highest common factor)
            if (a % result == 0 && b % result == 0) {
                break;
            }
            result--;
        }
        printf("%d",result);
    }
    
    return 0;
}