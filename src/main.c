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




int main (){

int arr[8] = {5, 12, 3, 8, 21, 7, 14, 2};

for(int i=0;i<7;i++){
    printf("%3d,",arr[i]);
}

for(int i=0;i<7;i++){
    for(int j=i+1;j<7;j++){
    if(arr[i]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }        
    }
}
    printf("\nSorted:\n");

for(int i=0;i<7;i++){
    printf("\n%3d,",arr[i]);
}




return 0;
}








