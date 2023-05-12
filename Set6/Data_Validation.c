#include <stdio.h>
#include <string.h>

void printData(char username[], char domain[], char extension[]){

    printf("Your data is: ");
    for(int i = 0; i < strlen(username); i++){
        printf("%c", username[i]);
    }
    printf("@");
    for(int i = 0; i < strlen(domain); i++){
        printf("%c", domain[i]);
    }
    printf(".");
    for(int i = 0; i < strlen(extension); i++){
        printf("%c", extension[i]);
    }
    return;
}

int main(){

    char username[100], domain[100],  extension[100];

    printf("Enter the username: ");
    gets(username);

    printf("Enter the domain: ");
    gets(domain);

    printf("Enter the extension: ");
    gets(extension);

    printData(username, domain, extension);

    int flag = 1;

    if(strlen(username) == 0 || strlen(domain) == 0 || strlen(extension) == 0)
        printf("\nData is Invalid");

    else{
    for(int i = 0; i < strlen(username); i++){

        if(! ((username[i] >= 'A' && username[i] <= 'Z') ||
             (username[i] >= 'a' && username[i] <= 'z') ||
             (username[i] == '.'))){

                flag = 0;
                break;
        }
    }

    for(int i = 0; i < strlen(domain); i++){

        if(! (domain[i] >= 'a' && domain[i] <= 'z')){
            flag = 0;
            break;
           }
    }

    for(int i = 0; i < strlen(extension); i++){

        if(! (extension[i] >= 'a' && extension[i] <= 'z')){
            flag = 0;
            break;
           }
    }
    }

    if(flag == 1)
        printf("\nData is valid");
    else
        printf("\nData is Invalid");
    
}