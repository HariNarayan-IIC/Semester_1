// 5. Write a C program to print all odd numbers between 1 to 100. 

#include <stdio.h>

void main(){
    int n= 1;
    if (n%2 == 0){
        n++;
    }
    while(n<= 100){
        printf("%d\n",n);
        n+=2;
    }
}