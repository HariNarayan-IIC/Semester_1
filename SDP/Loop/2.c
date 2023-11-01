//2. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

#include <stdio.h>

void main(){
    int n;
    printf("Enter a interger: ");
    scanf("%d",&n);
    while (n>0){
        printf("%d\n",n);
        n--;
    }
}