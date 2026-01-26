#include <stdio.h>

int nums [6];
int largest;

int main() {

    for(int i=5; i>=0;i--){
        printf("Enter a number:");
        scanf("%d", &nums[i]);
    }

int largest=nums[0];

for(int i; i<=5; i++){
    if(nums[i]>largest){
        largest= nums[i];
    }
}

printf(" %d is the largest number", largest );

    return 0;
}




