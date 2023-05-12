#include <stdio.h>
int main(){

for(int i = 1; i <= 5; i++){

    int c = 1;

    for(int gap = 5 - i; gap >= 1; gap--){

        printf(" ");
    }

    for(int j = 1; j <= i; j++){
        printf("%d ", c);
        c = c * (i - j) / j;
    }
    printf("\n");
}
}