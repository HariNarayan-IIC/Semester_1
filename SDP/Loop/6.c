//6. Write a C program to find the sum of all natural numbers between 1 to n. 

#include<stdio.h>

void main(){
    int n;
    long long sum= 0;
    printf("Enter a integer n: ");
    scanf("%d",&n);
    for (int i= 0; i<= n; i++){
        sum+= i;
    }
    printf("Sum of all natural numbers from 1 to %d is %d",n, sum);
}