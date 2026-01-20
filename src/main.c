#include <stdio.h>

int num;


int main(){

printf("Please enter a number:");
scanf("%d", num);


if(num==0){
    printf("this number is zero");
}else if(num <0){
    printf("this number is a negative number");
}else{
    printf("this number is a positive number");
}

    return 0;
}