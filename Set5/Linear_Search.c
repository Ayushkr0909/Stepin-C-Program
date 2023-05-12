#include <stdio.h>

int main(){

    int arr[] = {30, 40, 10, 60, 50, -20, 60};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    int key = 60;
    int count = 0;

    printf("%d is present at index: ", key);
    for(int i = 0; i < length; i++){
        if(arr[i] == key){
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d is present %d times.", key, count);
}