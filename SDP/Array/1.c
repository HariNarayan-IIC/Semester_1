// 1. WAP to find max & min elements in an array  

#include <stdio.h>

void main(){
    int len, max, min;
    printf("Enter number of elements in the array: ");
    scanf("%d", &len);
    int array[len];
    for(int i= 0; i<len; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &array[i]);
    }
    max= array[0];
    min= array[0];
    for(int i= 1; i<len; i++){
        if (max < array[i]){
            max= array[i];
        }
        if (min > array[i]){
            min= array[i];
        }
    }

    printf("Max element of array is %d\nMin element of array is %d", max, min);

}