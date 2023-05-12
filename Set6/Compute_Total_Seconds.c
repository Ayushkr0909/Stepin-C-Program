#include <stdio.h>

int main(){

    char str[100];

    printf("Enter Time in hh:mm:ss :");  // 02:30:20
    gets(str);

    int intHour, intMin, intSec, 
        hour = 0, min = 0, sec = 0;

        // converting strings to integers

    for(int i = 0; str[i] != '\0'; i++){

        if(i >= 0 && i <= 1){
            intHour = str[i] - 48;
            hour = hour * 10 + intHour;
        }
        else if(i >= 3 && i <= 4){
            intMin = str[i] - 48;
            min = min * 10 + intMin;
        }
        else if(i >= 6 && i <= 7){
            intSec = str[i] - 48;
            sec = sec * 10 + intSec;
        }
        
    }
    printf("Hour: %d", hour);
    printf("\nMin: %d", min);
    printf("\nSec: %d", sec);

    // counting total seconds

    int totalSec = hour * 3600 + min * 60 + sec;
    printf("\nTotal seconds: %d seconds", totalSec);
    
}