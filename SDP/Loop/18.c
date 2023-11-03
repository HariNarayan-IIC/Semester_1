// 18. Write a C program to find frequency of each digit in a given integer. 

#include <stdio.h>

void main(){
    int n, duplicate_n, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i= 0; i< 10; i++){
        count= 0;
        duplicate_n= n;
        while(duplicate_n!=0){
            if(i== duplicate_n%10){
                count++;
            }
            duplicate_n/=10;
        }
        printf("Frequency of %d in %d = %d\n", i, n, count);
    }
}