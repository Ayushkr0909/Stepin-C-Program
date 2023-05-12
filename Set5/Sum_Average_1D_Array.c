#include <stdio.h>

int main(){

    int arr[] = {12, 84, 20, 36, 64, 56, 72, 10, 45, 90};

    int sum = 0, length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < length; i++){

        sum = sum + arr[i];
    }
    printf("Sum of elements of Array is: %d", sum);
    printf("\nAverage of elements of Array is: %d", sum/length);
}