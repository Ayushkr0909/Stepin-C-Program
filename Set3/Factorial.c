#include <stdio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int fact = n;

    printf("%d! = ", n);

    if(n == 0)
        fact = 1;

    while(n > 1){
        fact = fact * (n - 1);
        n--;
    }
    printf("%d", fact);

    return 0;
    

}