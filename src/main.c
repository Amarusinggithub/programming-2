/*
Author: Amar Campbell- 2501977
Data: 27/01/2026
Description: Worksheet 2 Question 2
*/
#include <string.h> 
#include <stdio.h>

char correctPassword []="secure123";

char password[50];

int main (){
int result=0;
do{
printf("Please enter the correct password:\n");
scanf("%s",password );
result= strcmp(  password,   correctPassword);

if (result==0){
    printf("Access Granted\n");
}else{
    printf("Access Denied\n");

}

}while(result!=0);

return 0;
}
















