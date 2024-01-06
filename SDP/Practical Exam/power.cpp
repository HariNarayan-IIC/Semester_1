#include <iostream>
using namespace std;

int power(int x, int n){
    if (n== 0){
        return 1;
    }
    if (n== 1){
        return x;
    }

    int result = x* power(x, n-1);
    return result;
}

int main(){
    int x= 4;
    int n= 2;
    
    cout<<x<<  " raised to the power of "<< n<< " is "<< power(x,n);
    return 0;
}