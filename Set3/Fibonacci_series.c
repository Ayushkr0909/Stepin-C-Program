#include <stdio.h>

int main(){

    int n1 = 0, n2 = 1, x;

    printf("Enter number of cycles: ");
    scanf("%d", &x);

    printf("%d %d", n1, n2);

    for(int i = 3; i <= x; i++){
        int sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        printf(" %d", sum);
    }
    return 0;
}