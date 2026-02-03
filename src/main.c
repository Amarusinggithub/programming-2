/*
Author: Amar Campbell- 2501977
Data: 03/02/2026
*/

#include <stdio.h>
#include <stdbool.h>



int factorial (int num);
int main (){
    int num;
    char ans;
while (true){
    printf("Please enter a number:\n");
    scanf("%d",&num );
    int num2= factorial(num);

    printf("This is the factorial: %d\n",num2);

    printf("\nDo you want to continue (Y/N)?\n");
    scanf(" %c",&ans );

    if(ans=='n' || ans=='N'){
        break;
    }

}

return 0;
}

int factorial(int num){
    if (num==0){
        return 1;
    }else{
        return num*factorial(num-1);
    }
}