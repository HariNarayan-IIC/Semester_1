// 24. Write a C program to find HCF (GCD) of two numbers. 

#include <stdio.h>

void main(){
    int x, y;
    printf("Enter two numbers(x y): ");
    scanf("%d %d", &x, &y);
    if (x< y){
        if (y%x == 0){
            printf("%d is the highest common factor", x);
        }
        else{
            for(int i= x/2; i>0; i--){
                if (x%i==0 && y%i==0){
                    printf("%d is the highest common factor", i);
                    break;
                }
            }
        }
    }
    else{
        if (x%y == 0){
            printf("%d is the highest common factor", y);
        }
        else{
            for(int i= y/2; i>0; i--){
                if (x%i==0 && y%i==0){
                    printf("%d is the highest common factor", i);
                    break;
                }
            }
        }
    }
}