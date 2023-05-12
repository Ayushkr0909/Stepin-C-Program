#include <stdio.h>

int main(){

    int start, end;
    int flag;
    int count = 0;

    printf("Enter the start and end range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for(int n = start; n <= end; n++){

        if(n <= 1){
        continue;
        }

        flag = 1;
        for(int i = 2; i <= n/2; i++){

            if(n % i == 0){
                flag = 0;
                break;
            }  
        }
        if(flag == 1){
            printf("%d ", n);
            count++;
        }
    }
        printf("\nNumber of Prime numbers between %d and %d is: %d", start, end, count);
        
    return 0;
}