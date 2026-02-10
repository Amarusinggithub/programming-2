/*
Author: Amar Campbell- 2501977
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


float calculatePercentage(int * correct, int numQues);
int generateRand(int max, int min);
int multiplication(int num1,int num2);
void checkAns(int random, int result, int ans,int* correct);


int main (){
    srand(time(0));
    int num1, num2,ans,result,random,numQues=10, correct=numQues;

for (int i=0; i<10;i++){

random=generateRand(4,1);
num1= generateRand(10,1);
num2=generateRand(10,1);
result=multiplication( num1,  num2);

printf("\nHow much is %d times %d?\n ", num1, num2);
scanf("%d", &ans);

checkAns( random, result, ans,&correct);
    
}

float percent= calculatePercentage(&correct,  numQues);
printf("Your score is %d/%d which is %.1f%%\n.",correct, numQues, percent);
printf("\nThank you for participating.\n");
correct=numQues;

return 0;
}


int generateRand(int max, int min){
    return rand()%(max-min+1)+min;
}

int multiplication(int num1,int num2){
    return num1 * num2;
}

void checkAns(int  random, int  result, int  ans,int* correct){
    if(result==ans){
    switch(random){
        case 1:
        printf("Very good!");
        break;
        case 2:
        printf("\nExcellent!\n");
        break;
        case 3:
        printf("\nNice work!\n");
        break;
        case 4:
        printf("\nKeep up the good work!\n");
        break;
        default:
            printf("\nVery good!\n");
            break;
    }

}else{

    switch(random){
        case 1:
        *correct--;
        printf("\nNo. Please try again.\n");
        break;
        case 2:
        *correct--;
        printf("\nWrong. Try once more.\n");
        break;
        case 3:
        *correct--;
        printf("\nDon't give up!\n");
        break;
        case 4:
        *correct--;
        printf("\nNo. Keep trying.\n");
        break;
        default:
        *correct--;
        printf("\nInvalid Input. Please try again\n");
        break;
    }
}
}

float calculatePercentage(int * correct, int numQues){
return (*correct/ numQues)*100;
}


