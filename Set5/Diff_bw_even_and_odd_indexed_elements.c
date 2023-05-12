#include <stdio.h>

int main(){

    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};

    int length = sizeof(arr) / sizeof(arr[0]);
    int sumOfEven = 0, sumOfOdd = 0;

    for(int i = 0; i < length; i++){

        if(i % 2 == 0){
            sumOfEven = sumOfEven + arr[i];
        }
        if(i % 2 != 0){
            sumOfOdd = sumOfOdd + arr[i];
        }
    }

    if(sumOfEven > sumOfOdd)
        printf("Difference between Sum of even and odd elements is: %d", sumOfEven - sumOfOdd);
    else
        printf("Difference between Sum of even and odd elements is: %d", sumOfOdd - sumOfEven);

}