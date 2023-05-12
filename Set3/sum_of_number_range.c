#include <stdio.h>

int main(){

    int start, end, sum = 0;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    for(int i = start; i <= end; i++){
        sum = sum + i;
    }
    printf("Sum of number from %d and %d is %d", start, end, sum);

    return 0;
}