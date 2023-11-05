// 22. Write a C program to find all factors of a number. 

#include <stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d are 1", n);
    for (int i= 2; i<= n/2; i++){
        if (n%i == 0){
            printf(", %d", i);
        }
    }
    printf(", %d.", n);
}