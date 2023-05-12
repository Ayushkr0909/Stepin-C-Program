#include <stdio.h>

int main(){

    int i = 0, value, temp = 0, hexaArr[10];
    char inputArray[] = "35A";

    while(inputArray[i] != '\0'){

        if (inputArray[i] >= '0' && inputArray[i] <= '9')
            value = inputArray[i] - 48;
        if(inputArray[i] >= 'A')
            value = inputArray[i] - 55;

        hexaArr[i] = value;

        i++;

    }
    int j = 0;

    while(j < i){
        temp = (16 * temp) + hexaArr[j];
        j++;
    }

    printf("Decimal: %d", temp);
}