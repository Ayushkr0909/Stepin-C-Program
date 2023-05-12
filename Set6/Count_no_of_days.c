#include <stdio.h>

int main(){

    char str[100];
    int date, mon, year,
        dd = 0, mm = 0, yyyy = 0, 
        daysElapsed = 0,
        noOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        i = 0;

    printf("Enter dd/mm/yyyy: ");
    gets(str);

    // converting strings to integers

    for(int i = 0; str[i] != '\0'; i++){

        if(i >= 0 && i <= 1){
            date = str[i] - 48;
            dd = dd * 10 + date;
        }
        else if(i >= 3 && i <= 4){
            mon = str[i] - 48;
            mm = mm * 10 + mon;
        }
        else if(i >= 6 && i <= 9){
            year = str[i] - 48;
            yyyy = yyyy * 10 + year;
        }
        
    }

    // checking for leap year

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

    // counting no of days

    for(int i = mm - 2; i >= 0; i--){

        daysElapsed =  daysElapsed + noOfDays[i];
        
        }
    printf("Days Elapsed: %d", daysElapsed + dd);
}