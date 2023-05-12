#include <stdio.h>

int main(){

    int triNum = 1;
    int upto;
    int sum = 1;

    printf("Enter upto tiangular number: ");
    scanf("%d", &upto);

    printf("Triangular numbers upto %d are: \n1 ", upto);

    int i = 2;
    while(triNum < upto){

        triNum = triNum + i;
        sum = sum + triNum;

        printf("%d ",triNum);
        i++;
    }
    printf("\nSum of triangular numbers is: %d", sum);
}