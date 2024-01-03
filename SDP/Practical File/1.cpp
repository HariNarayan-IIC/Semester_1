// Write a program to read the values of a,b, and c and display the value of x,
// Where x = a/b-c. Test your program for the following values:
// (a) a = 250, b = 85, c = 25
// (b) a = 300, b = 70, c = 70

#include <stdio.h>

int main(){
    int a, b, c, x;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    x= a/b-c;
    printf("%d",x);
    return 0;
}
