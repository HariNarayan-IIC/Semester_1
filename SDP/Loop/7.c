//7. Write a C program to find the sum of all even numbers between 1 to n. 

#include<stdio.h>

void main(){
    int n;
    long long sum= 0;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i+=2){
        sum+= i;
    }
    printf("Sum of all even numbers between 1 to %d is %d.", n, sum);
}