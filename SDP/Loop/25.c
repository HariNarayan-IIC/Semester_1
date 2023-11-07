// 25. Write a C program to find LCM of two numbers. 

#include <stdio.h>

void main(){
    int x, y, gcd, lcm;
    printf("Enter two numbers (x y): ");
    scanf("%d %d", &x, &y);

    //Finding GCD
    if (x<y){
        if (y%x== 0){
            gcd= x;
        }
        for(int i= x/2; i>0; i--){
            if (y%i == 0 && x%i == 0){
                gcd= i;
                break;
            }
        }
    }
    else{
        if (x%y == 0){
            gcd= y;
        }
        for(int i= y/2; i>0; i--){
            if (y%i == 0 && x%i == 0){
                gcd= i;
                break;
            }
        }
    }

    //Finding LCM
    //printf("GCD is %d\n", gcd);
    lcm= (x*y)/ gcd;
    printf("LCM of %d and %d is %d", x, y, lcm);
}