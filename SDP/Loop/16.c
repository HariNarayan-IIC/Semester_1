// 16. Write a C program to enter a number and print its reverse. 

#include <stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d in reverse is ", n);
    while(n!=0){
        printf("%d", n%10);
        n/=10;
    }
}