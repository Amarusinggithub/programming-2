/*
Author: Amar Campbell- 2501977
Date: 15/02/2026
Description: worksheet 5 question 8 of tutorial questions
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 5
#define COLUMN 6




int main (){

int arr[ROW][COLUMN] = {
    {1, 2, 3, 4, 5},
    {2, 4, 6, 8, 10},
    {20, 10, 5, 3, 1},
    {3, 6, 9, 12, 15}
};

for (int r=0;r<ROW-1;r++){
    int sum=0;
    for(int c=0;c<COLUMN-1;c++){
        sum+=arr[r][c];
    }
            arr[r][5]=sum;
}

for(int c=0;c<COLUMN-1;c++){
    int sum=0;
    for(int r=0;c<ROW-1; r++){
        sum+=arr[r][c];
    }
    arr[4][c]=sum;
}

int grandtotal=0;
for(int c=0;c<COLUMN;c++){
    grandtotal+=arr[4][c];
}

arr[4][5]=grandtotal;


for (int r=0;r<ROW-1;r++){
    for(int c=0;c<COLUMN-1;c++){
        printf("%5d",arr[r][c]);
    }
    printf("\n");
}

return 0;
}








