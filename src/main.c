/*
Author: Amar Campbell- 2501977
Date: 15/02/2026
Description: Practice test
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

void populate();
int findTotal();

int arr[5];

int main (){
srand(time(0));
populate();
printf("This the sum of the array: %d", findTotal());
return 0;
}

void populate(){
    for ( int i=0; i<5;i++){
        arr[i]= rand()%(21-11+1)+11;
    }
}

int findTotal(){
    int sum;
    for(int i=0;i<5;i+=){
        sum+=arr[i];
    }
    return sum;
}