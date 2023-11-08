// 2. WAP to count the frequency of each element in an array 

#include <stdio.h>

void main(){
    int len;
    printf("Enter the length of array: ");
    scanf("%d", &len);
    int array[len];
    for (int i= 0; i< len; i++){
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &array[i]);
    }
    int count;
    for (int i= 0; i< len; i++){
        count= 0;
        for (int j= 0; j< len; j++ ){
            if (array[j]== array[i]){
                count++;
            }
        }
        printf("Frequency of %d is %d.\n", array[i], count);

    }
}