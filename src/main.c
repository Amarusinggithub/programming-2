#include <stdio.h>

int nums[3],largest;

int main() {

    printf("Enter a number:\n");
    scanf("%d", &nums[0]);

    printf("Enter another number:\n");
    scanf("%d", &nums[1]);

    printf("Enter another number:\n");
    scanf("%d", nums[2]);

largest=nums[0];

for(int i=0; i< sizeof(nums);i++){
    if(nums[i]>largest){
        largest = nums[i];
    }
}

    return 0;
}




