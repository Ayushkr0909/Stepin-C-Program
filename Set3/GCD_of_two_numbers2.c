#include <stdio.h>

int main(){

    int n1, n2, GCD;;

    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    printf("GCD of %d and %d is: ", n1, n2);

    if(n1 == 0)
        printf("%d", n2);
    if(n2 == 0)
        printf("%d", n1);

    while(n1 != n2){

        if(n1 > n2){
            n1 = n1 - n2;

            GCD = n1;
        }

        else
            n2 = n2 - n1;

            GCD =  n2;
    }

    printf("%d", GCD);

    return 0;
}