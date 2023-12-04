//Write a program to add, subtract and multiply two complex numbers using structures to
//function.

#include <stdio.h>

typedef struct complex_no {
    float real;
    float imag;
}comp;

comp add(comp x, comp y){
    comp sum;
    sum.real= x.real + y.real;
    sum.imag= x.imag + y.imag;
    return sum;
}   //Function takes two complex numbers and returns their sum as complex number.

comp subt(comp x, comp y){
    comp diff;
    diff.real= x.real - y.real;
    diff.imag= x.imag - y.imag;
    return diff;
}   //Function takes in two complex numbers x & y and returns x-y.

comp mult(comp x, comp y){
    comp product;
    product.real= x.real*y.real - x.imag*y.imag;
    product.imag= x.real*y.imag + x.imag*x.real;
    return product;
}   //Function takes in two complex numbers x & y and returns their product

int main(){
    comp x= {2, 3};
    comp y= {4, 5};
    printf("Complex number x= %.2f + i(%.2f)\n", x.real, x.imag);
    printf("Complex number y= %.1f + i(%.1f)\n", y.real, y.imag);
    comp sum= add(x, y);
    comp diff= subt(x, y);
    comp product= mult(x, y);
    printf("x + y = %.2f + i(%.2f)\n", sum.real, sum.imag);
    printf("x - y = %.2f + i(%.2f)\n", diff.real, diff.imag);
    printf("x * y = %.2f + i(%.2f)\n", product.real, product.imag);
    return 0;
}