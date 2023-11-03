// 13. Write a C program to swap first and last digits of a number.

#include <stdio.h>
#include <math.h>

void main(){
    int n, first, last, place= 1;
    printf("Enter a numger: ");
    scanf("%d", &n);
    last= n%10;
    first= n;
    while (first >9){
        first/= 10;
        place*= 10;
    }
    printf("First digit is %d\nLast digit is %d\n", first, last);
    n= n/10;
    n= n*10 + first;
    n= n - first* place;
    n= n + last* place;
    printf("The number after swapping first and last digit is %d", n);

}