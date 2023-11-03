// 19. Write a C program to enter a number and print it in words. 

#include <stdio.h>

void main(){
    char numbers[10][6]= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n, first, place;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d in words: ", n);
    while(n!=0){
        first= n;
        place= 1;
        while(first> 9){
            first/= 10;
            place*= 10;
        }
        printf("%s ", numbers[first]);
        n-= (first* place);
    }
}