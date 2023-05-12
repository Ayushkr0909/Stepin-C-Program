#include <stdio.h>

int main(){

    int dd, mm, yyyy, daysElapsed = 0;
    int noOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i = 0;

    printf("Enter dd/mm/yyyy: ", dd, mm, yyyy);
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if(yyyy % 100 == 0){
        if(yyyy % 400 == 0){
            noOfDays[1] = 29;
        }
    }
    else{
        if(yyyy % 4 == 0){
            noOfDays[1] = 29;
        }
    }

    for(int i = mm - 2; i >= 0; i--){

        daysElapsed =  daysElapsed + noOfDays[i];
        
        }
    printf("Days Elapsed: %d", daysElapsed + dd);
}