//1. Write a C program to print all natural numbers from 1 to n. - using while loop

#include <stdio.h>

int n;
int i= 1;
void main(){
    printf("Enter a integer: ");
    scanf("%d",&n);
    
    while(i<= n){
        printf("%d\n", i);
        i++;
    }
}

