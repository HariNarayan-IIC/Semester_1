// 23. Write a C program to calculate factorial of a number. 

#include <stdio.h>

void main(){
    int n, fact= 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i= 2; i<=n; i++){
        fact= fact* i;
    }
    printf("Factorial of %d is %d", n, fact);
}