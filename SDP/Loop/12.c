//12. Write a C program to find sum of the first and last digits of a number. 

#include <stdio.h>

void main(){
    int n, first, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last= n % 10;
    first= n;
    while(first >9){
        first/=10;
    }
    printf("Sum of first and last digits of %d is %d", n, first + last);
}