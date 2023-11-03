// 15. Write a C program to calculate product of digits of a number. 

#include <stdio.h>

void main(){
    int n;
    long long int product= 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n!= 0){
        product*= n%10;
        n/=10;
    }
    printf("Product of all digits of number is %d", product);
}