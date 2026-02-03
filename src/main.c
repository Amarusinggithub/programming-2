/*
Author: Amar Campbell- 2501977
Data: 03/02/2026
*/

#include <stdio.h>


float average (float grades []);

int main (){
float grades [3];

for(int i =0; i<3; i++){
printf("Enter your test score:\n");
scanf("%f", &grades[i] );
}

float mean=average(grades);

printf("This is your average: %.2f\n", mean);

return 0;
}

float average(float grades []){
float average=0.00;
float sum =0.00;

for (int i=0; i<3; i++){
    sum+=grades[i];
}
average= sum/3;
return average;

}

















