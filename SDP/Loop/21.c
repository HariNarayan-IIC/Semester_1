// 21. Write a C program to find power of a number using for loop. 

#include <stdio.h>

void main(){
    int n, pow;
    
    printf("Enter a number and power(num pow): ");
    scanf("%d %d", &n, &pow);
    long long int result= n;
    for(int i= 1; i< pow; i++){
        result*= n;
    }
    printf("%d raised to the power %d is %d", n, pow, result);

}