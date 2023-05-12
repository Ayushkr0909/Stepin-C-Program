#include <stdio.h>

int main(){

    int arr[] = {12, 84, 20, 36, 64, 56, 72, 10, 45, 90};

    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = length - 1; i >= 0; i--){

        printf("%d ", arr[i]);
    }

}