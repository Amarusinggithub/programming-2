#include <stdio.h>

void swap(int *a, int *b) {
    // TODO: implement swap using pointers
    int temp=*a;
    *a=*b;
    *b= temp;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int sum = 0;

    // TODO: Calculate sum using pointer arithmetic
    for (int i=0; i<5; i++){
        int num=arr[i];
        sum+=num;
    }

    printf("this is the sum of the values in the array: %d\n", sum);

    
    // TODO: Print array before swap
    printf("this is the array values: \n");
    for (int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
    

    
    // TODO: Swap first and last elements
    swap(ptr,&arr[4]);
    
    // TODO: Print array after swap
    printf("this is the array values after swap: \n");
    for (int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
