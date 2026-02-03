/*
Author: Amar Campbell- 2501977
Data: 03/02/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* checkScore (float score);

int main (){
float score;


printf("Enter your test score:\n");
scanf("%f", &score );

char* result= checkScore( score);

if(result != NULL){

printf("%s\n",result);
free(result);
}


return 0;
}

char* checkScore (float score){
char pass[]="pass";
char fail[]="fail";

char* message = malloc(strlen(pass));
    if (message == NULL) {
        // Handle allocation failure
        return NULL;
    }

if(score < 50){
    return strcpy(message,fail) ;
}

if(score >= 50){
    return strcpy(message,pass) ;
}
return NULL;

}

















