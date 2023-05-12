#include <stdio.h>

int main(){

    int arr[] = {30, 40, 10, 60, 50, -20};
    int length = sizeof(arr)/sizeof(arr[0]);
    int temp;

    for(int i = 0; i < length - 1; i++){
        for(int j = i + 1; j < length; j++){

            if (arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
}