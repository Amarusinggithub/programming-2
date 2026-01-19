#include <stdio.h>

int nums[3],temp;

int main() {

    printf("Enter a number:\n");
    scanf("%d", &nums[0]);

    printf("Enter another number:\n");
    scanf("%d", &nums[1]);

    printf("Enter another number:\n");
    scanf("%d", nums[2]);

temp=nums[2];
nums[2]=nums[0];
nums[0]=temp;

    return 0;
}




