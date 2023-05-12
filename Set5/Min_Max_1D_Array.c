#include <stdio.h>

int main(){

    int arr[] = {12, 84, 20, 36, 64, 56, 72, 10, 45, 90};

    int length = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];

    for(int i = 0; i < length; i++){

        if(arr[i] < min)
            min = arr[i];
    }
    printf("Minimum of elements of Array is: %d", min);

    int max = arr[0];

    for(int i = 0; i < length; i++){

        if(arr[i] > max)
            max = arr[i];
    }
    printf("\nMaximum of elements of Array is: %d", max);
}