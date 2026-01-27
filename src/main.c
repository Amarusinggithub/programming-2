/*
Author: Amar Campbell- 2501977
Data: 27/01/2026
Description: Worksheet 2 Question 3
*/

#include <stdio.h>




int main (){

float totalPayroll=0.00;
float weeklySalary=0.00;
int aboveThreshold=0;
const float THRESHOLD=80000;

for(int i =0; i<40;i++){
printf("Please enter employee number %d weekly salary:\n $", i+1);
scanf("%f", &weeklySalary );
totalPayroll+=weeklySalary;
if (weeklySalary< THRESHOLD){
    continue;
}
aboveThreshold+=1;
}

printf("This is the total payroll cost: $%.2f\n", totalPayroll);
printf("The number of employees with salary above $80,000: %d\n", aboveThreshold);

return 0;


}


















