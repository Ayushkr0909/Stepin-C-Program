#include <stdio.h>

int fact(int x){

    if(x == 0)
        return 1;

    int fact = x;
    while(x > 1){
        fact = fact * (x-1);
        x--;
    }
    return fact;
}

int main(){

    int n,r,ncr;

    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);

    /*int factOfN = fact(n);
    int factOfR = fact(r);
    int factOfNminR = fact(n-r);*/

    ncr = fact(n) / (fact(r) * fact(n-r));

    printf("ncr = %d", ncr);

    return 0;
    
}