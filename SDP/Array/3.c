// 3. WAP to convert Decimal number into Octal number 

#include <stdio.h>
int dec_oct(int number){
    int oct=0, place= 1;
    if (number< 8){
        return number;
    }
    while(number!= 0){
        oct+= (number%8)*place;
        place*= 10;
        number/= 8;  
    }
    return oct;
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    //Method 1
    printf("Octal equivalent of %d is %o\n", n, n);
    
    //Method 2
    printf("Octal equivalent of %d is %d", n, dec_oct(n));
}