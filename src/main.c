/*
Author: Amar Campbell- 2501977
Data: 27/01/2026
Description: Worksheet 2 Question 4

 A fast-food restaurant allows customers to place multiple orders. Each item costs $500.
Write a program that will repeatedly ask if the customer wants to order another item
(Y/N). Calculate and display the total cost when ordering is complete.

*/


#include <stdio.h>


int calculateModulus(int  num1, int num2);


int main (){


calculateModulus(100, 301);



return 0;

}

int calculateModulus(int  num1, int num2){
while (num1>=num2){
    num1=num1-num2;
}

   return num1;

}

















