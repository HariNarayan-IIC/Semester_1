//8. Write a C program to find the sum of all odd numbers between 1 to n. 

#include<stdio.h>

void main(){
    int n;
    long long sum= 0;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i+=2){
        sum+= i;
    }
    printf("Sum of all odd numbers between 1 to %d is %d.", n, sum);
}