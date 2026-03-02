/*
Author: Amar Campbell- 2501977
Date: 15/02/2026
Description: worksheet 5 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 5
#define COLUMN 6


void binarySearch(int num);


int main (){
srand(time(0));


int arr[5];

for(int i=0;i<4;i++){
    arr[i]=rand()%(20-1+1)+1;
    printf("%3d,",arr[i]);
}

/*for(int i=0; i<7;i++){
   // int min_idx=i;
    for(int j=i+1;j<7;j++){
    
        if(arr[min_idx]>arr[j]){
            min_idx=j;
        }

        if(arr[j]>arr[i]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }*/

    int temp=arr[0];
    arr[0]=arr[4];
    arr[4]=temp;

printf("\n");
printf("\n");

for(int i=0;i<4;i++){
    printf("%3d,",arr[i]);
}

    return 0;
}


void binarySearch(int num){

}






