#include <stdio.h>

int main(){

    int a, b, c;

    printf("Enter lengths of three sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("The lengths of three sides of the triangle are: %d, %d, %d\n", a, b, c);

    if(a + b < c || b + c < a || c + a < b){
        printf("The triangle cannot be formed");
    }
    else if(a == b && a == c){
        printf("The triangle is an Equilateral Triangle");
    }
    else if(a == b || b == c || c == a){
        printf("The triangle is an Isosceles Triangle");
    }
    else if(a != b && b != c && c != a){
        printf("The triangle is an Scalan Triangle");
    }
    else if(c*c == (a*a) + (b*b) || 
       b*b == (a*a) + (c*c) ||
       a*a == (b*b) + (c*c)){
        printf("The triangle is a right angled Scalan Triangle");
    } 

    return 0;
       
 }