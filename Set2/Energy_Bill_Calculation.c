#include <stdio.h>

int main(){

    int nUnits, baseCharge = 100, totalBill;


    printf("Enter number of Units: ");
    scanf("%d", &nUnits);

    if(nUnits <= 100)
        totalBill = baseCharge + 3*nUnits;

    else if(nUnits > 100 && nUnits < 200)
        totalBill = baseCharge + 100*3 + (nUnits - 100)*5;

    else if(nUnits > 200 && nUnits < 400)
        totalBill = baseCharge + 100*3 + 100*5 + (nUnits - 200)*7;

    else if(nUnits > 400)
        totalBill = baseCharge + 100*3 + 100*5 + 200*7 + (nUnits - 400)*10;

    printf("Total Energy Bill is: %d", totalBill);

    return 0;
}