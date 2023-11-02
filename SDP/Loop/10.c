// 10. Write a C program to count the number of digits in a number.

#include <stdio.h>

void main(){
    int n, length= 1;
    printf("Enter a integer: ");
    scanf("%d", &n);
    while(n> 9 || n< -9){
        n= n/10;
        length++;
    }
    printf("Length is %d", length);
}