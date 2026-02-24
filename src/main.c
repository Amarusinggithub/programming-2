/*
Author: Amar Campbell- 2501977
Date: 15/02/2026
Description: worksheet 5 question 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displaySmallest(int arr[10]);
void displayLargest(int arr[10]);

int main (){
srand(time(0));

int arr[10];

for(int i=0; i<10;i++){
    arr[i]=rand()%(25-10+1)+10;
    printf("%d \n",arr[i]);
}


displaySmallest(arr);
displayLargest(arr);

return 0;
}

void displaySmallest(int arr[10]){
int smallest=arr[0];
for(int i=0; i<10;i++){
    if(arr[i]<smallest){
        smallest=arr[i];
    }
}

    printf("\n%d the smallest number.\n", smallest);

}


void displayLargest(int arr[10]){
int largest=arr[0];

for(int i=0; i<10;i++){

if(arr[i]>largest){
        largest=arr[i];
    }    }

        printf("\n %d the largest number.\n", largest);

}








