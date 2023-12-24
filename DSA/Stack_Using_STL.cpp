//Stack using Standard library (CodeHelp by Babbar)

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> S;
    S.push(3);
    S.push(4);
    S.push(5);

    S.pop();

    cout<<"Printing top element: "<< S.top()<< endl;

    if(S.empty()){
        cout<< "Stack is empty."<< endl;
    }
    else{
        cout<< "Stack is not empty"<< endl;
    }

    cout<< "Size of stack is "<< S.size()<< endl;
    

    return 0;
}