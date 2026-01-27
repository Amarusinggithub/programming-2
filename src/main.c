/*
Author: Amar Campbell- 2501977
Data: 27/01/2026
Description: Worksheet 2 Question 1
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

return 0;
}
















