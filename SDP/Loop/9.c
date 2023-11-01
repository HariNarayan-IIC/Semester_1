// 9. Write a C program to print a multiplication table of any number.

#include <stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i= 1; i<= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
}