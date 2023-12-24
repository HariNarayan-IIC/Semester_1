//Stack implementation(CodeHelp by Babbar)

#include <iostream>
using namespace std;

class stack{
    private:
    // Properties/Data members
    int* arr;
    int top;
    int size;

    public:
    // Constructor
    stack(int size){
        this->size= size;
        arr= new int[size];
        top= -1;
    }
    // Behaviours/Methods
    void push(int data){
        if (this->size- top> 1){
            top++;
            arr[top]= data;
        }
        else{
            cout<< "Stack overflow"<< endl;
        }
    }//Push function

    void pop(){
        if (isEmpty()){
            cout<< "Stack is empty!!"<< endl;
            return;
        }
        arr[top]= 0;
        top--;
    }//Pop function

    int peek(){
        if (this->isEmpty()){
            cout<< "Stack is empty!!"<< endl;
            return -1;
        }
        return arr[top];
    }//Peek function

    bool isEmpty(){
        if (top<0){
            return true;
        }
        else {
            return false;
        }
    }//Empty function

    int Size(){
        return top+1;
    }//Size function

};

int main(){
    stack S(10);
    S.push(1);
    S.push(2);
    S.push(3);
    S.pop();
    cout<< "Element at top: "<< S.peek()<< endl;
    cout<< "Size of stack is: "<< S.Size()<< endl;
    
    if (S.isEmpty()){
        cout<< "Stack is empty."<< endl;
    }
    else{
        cout<< "Stack is not empty."<< endl;
    }

    return 0;
}