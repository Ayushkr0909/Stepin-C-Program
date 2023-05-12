#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    int n;
    char dir = 'R';

    printf("Enter String to rotate: ");
    gets(str);

    printf("Enter number of rotations: ");
    scanf("%d", &n);

    int length = strlen(str);

    if(dir == 'L'){

        // Iterating n times
        for(int i = 0; i < n; i++){
            int j, first;    
            //Stores the first element of the array    
            first = str[0];  
        
            // left shift each element of array by one
            for(j = 0; j < length-1; j++){     
                str[j] = str[j+1];    
            }    
            //First element of array will be added to the end    
            str[j] = first;    
        }
    }
    else if(dir == 'R'){

        // Iterating n times
        for(int i = 0; i < n; i++){
            int j, last;    
            //Stores the last element of the array    
            last = str[length - 1];  
        
            // right shift each element of array by one
            for(j = length - 2; j >= 0; j--){     
                str[j + 1] = str[j];    
            }    
            //last element of array will be added to the start    
            str[0] = last;    
        }
    } 
        
    //Displays resulting array after rotation    
    printf("Array after %c rotation by %d: \n",dir, n);    
    for(int i = 0; i < length; i++){    
        printf("%c", str[i]); 
    }
}