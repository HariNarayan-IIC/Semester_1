//3. Write a C program to print all alphabets from a to z. - using while loop 

#include <stdio.h>

void main(){
    int n= 97;
    while (n>96 && n<123)
    {
        printf("%c ",n);
        n++;
    }
}