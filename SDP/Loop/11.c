// 11. Write a C program to find the first and last digits of a number. 

#include <stdio.h>

void main(){
    int n, first, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last= n%10;
    while(n>9 || n<-9){
        n/=10;
    }
    first= n;
    printf("First digit is %d\nLast digit is  %d",first, last);
}