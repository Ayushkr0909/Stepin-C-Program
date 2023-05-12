#include <stdio.h>
int main(){

    int z = 1;

for(int i = 1; i <= 5; i++){

    for(int gap = 5 - i; gap >= 1; gap--){

        printf(" ");
    }

    for(int j = 1; j <= i; j++){

        printf("%d  ", z);
        z++;
    }
    printf("\n");
}
}