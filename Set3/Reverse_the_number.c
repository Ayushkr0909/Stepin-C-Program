#include <stdio.h>

int main(){

    int n, reminder, reverse = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    int temp = n;

    printf("Reversed number is: ");
    while(temp != 0){
        reminder = temp % 10;
        reverse = reverse * 10 + reminder;
        temp = temp/10;
    }
    printf("%d\n", reverse);

    if(reverse == n)
        printf("%d is a pallindrome", n);
    else
        printf("%d is not a pallindrome", n);

    return 0;

}