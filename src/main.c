/*
Author: Amar Campbell- 2501977
Date: 15/02/2026
Description: worksheet 5 question 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int countCustomers(float arr[],int size);
float calculateTotal(float arr[],int size);
float findLowest(float arr[],int size);
void addInterest(float arr[],int size);

int main (){
srand(time(0));

float arr[25];

for(int i=0; i<25;i++){
    arr[i]=rand()%(50000-1000+1)+1000;
    printf("$%.2f \n",arr[i]);
}

printf("\nThere are  %d, with balance above $25,000\n",countCustomers(arr, 25));
printf("\n This is the total of the customers balance: $%.2f\n",calculateTotal( arr,25));
printf("\n This is the lowest balance: $%.2f",findLowest( arr,25));
addInterest( arr,25);

printf("\n");
for(int i=0; i<25;i++){
    printf("$%.2f \n",arr[i]);
}

return 0;
}


int countCustomers(float arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>25000){
            count++;
        }
    }
    return count;
}

float calculateTotal(float arr[],int size){
    float sum=0;
    for (int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
float findLowest(float arr[],int size){
    float lowest=arr[0];
    for(int i=0; i<size;i++){
        if(arr[i]<lowest){
            lowest=arr[i];
        }
    }

    return lowest;
}

void addInterest(float arr[],int size){
    const float INTEREST=0.05;
    int interest;
    for(int i=0; i<size; i++){
        interest= arr[i]*INTEREST;
        arr[i]+=interest;
    }
}





