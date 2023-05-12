#include <stdio.h>

int main(){

    int start, end, leapYear = 0, count = 0;

    printf("Enter the start year: ");
    scanf("%d", &start);

    printf("Enter the end year: ");
    scanf("%d", &end);

    for(int year = start; year <= end; year++){

        if(year % 100 == 0){
            if(year % 400 == 0){
                leapYear = 1;
        }
        else
            leapYear = 0;

        }
        else{
            if(year % 4 == 0){
                leapYear = 1;
            }
            else
               leapYear = 0;
        }

        if(leapYear == 1)
            count++;
    }
    printf("Number of leap years between %d and %d is: %d", start, end, count);

return 0;
}