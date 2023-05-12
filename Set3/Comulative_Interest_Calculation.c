#include <stdio.h>

int main(){

    float principal = 10000;
    float amount = principal;
    int quarters = 2;

    for(int i = 1; i <= quarters; i++){
        amount = amount + amount * 5/100;
    }
    printf("Total accumulated amount at end of %d quarters: %.2f", quarters, amount);

    float CI = amount - principal;
    printf("\nComulative Interest: %.2f", CI);

    return 0;

}