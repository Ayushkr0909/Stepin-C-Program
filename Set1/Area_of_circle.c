#include <stdio.h>

int main(){

    int radius;
    float pi = 3.14;

    printf("Enter radius of the circle: ");
    scanf("%d", &radius);

    float area = (float) (pi * radius * radius);

    printf("Area of the circle is: %f", area);

    return 0;


}