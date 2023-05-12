#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, root1, root2, d;

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;
    printf("%d\n",d);

    if(d > 0){
        root1 = (-b + sqrt (d)) / (2*a);
        root2 = (-b - sqrt (d)) / (2*a);

        printf("The real roots are: %d, %d", root1, root2);
    }
    else if(d == 0){
        root1 = -b / (2 * a);
        root2 = -b / (2 * a);

        printf("The real roots are: %d, %d", root1, root2);
    }
    else{
        printf("Roots are imaginary");
    }

    return 0 ;
}