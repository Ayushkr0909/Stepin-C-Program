#include <stdio.h>

int main(){

    int x, y, quadrant = 0;

    printf("Enter values of x and y: ");
    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0)
        quadrant = 1;
    else if(x < 0 && y > 0)
        quadrant = 2;
    else if(x < 0 && y < 0)
        quadrant = 3;
    else if(x > 0 && y < 0)
        quadrant = 4;
    else if(x == 0 || y == 0)
        printf("%d and %d belongs to no quadrant.", x, y);

    if(quadrant > 0){
        printf("%d and %d belongs to Quadrant%d", x, y, quadrant);
    }
    
    return 0;
}