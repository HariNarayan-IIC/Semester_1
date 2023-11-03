// 17. Write a C program to check whether a number is palindrome or not. 

#include <stdio.h>

void main(){
    int n, duplicate_n, inverted_n= 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    duplicate_n= n;
    while(duplicate_n!= 0){
        inverted_n= inverted_n*10 + duplicate_n%10;
        duplicate_n/=10;
    }
    if (n== inverted_n){
        printf("%d is palindrome.", n);
    }
    else{
        printf("%d is not palindrome.", n);
    }
}