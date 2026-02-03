/*
Author: Amar Campbell- 2501977
Data: 27/01/2026
Description: Worksheet 2 Question 4
*/

#include <stdio.h>


void greetings (char name []);

int main (){

char name[20];
printf("Enter a number:\n");

scanf("%s", name);
greetings(name);

return 0;
}

void greetings(char name []){

printf("hello %s\n", name);

}

















