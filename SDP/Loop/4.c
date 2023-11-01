//4. Write a C program to print all even numbers between 1 to 100. - using while loop 

#include <stdio.h>

void main(){
    int n=1;
    if (n % 2 != 0){
        n++;
    }
    while(n<=100){
        printf("%d\n",n);
        n+=2;
    }
}