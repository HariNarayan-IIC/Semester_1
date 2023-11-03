// 20. Write a C program to print all ASCII characters with their values. 

#include <stdio.h>

void main(){
    for (int i=0; i<256; i++){
        printf("%c ", i);
    }
}