/*
Author: Amar Campbell- 2501977
Date: 15/02/2026
Description: worksheet 6
*/

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

void checkEven(int *empIds,int *even,int size);

int main (){
srand(time(0));
int even=0;
int empIds [8];

for(int i=0; i<7;++i){
    empIds[i]=rand( )%(100-50+1)+50;
    printf("%3d", empIds[i]);
}

checkEven(empIds ,&even, 8);

printf("\nThere are %d employee id that are even.", even);
    return 0;
}


void checkEven(int *empIds ,int *even,int size){
    for(int i=0; i<size-1; ++i){
        if(*(empIds+i)%2==0){
            (*even)++;
        }
    }
}



