/*

*/

#include <stdio.h>


float salesPerDay[7];

float totalSales=0;


int main (){
for(int i=0;i<7; i++){
    printf("Enter the sales number for day %d:", i+1);
    scanf("%f", &salesPerDay[i]);
    totalSales+=salesPerDay[i];
}

printf("This is your total sales for the week $%.2f\n", totalSales);


    return 0;
}









