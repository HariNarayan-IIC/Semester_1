//Stack implementation
#include <iostream>
using namespace std;

class stack{
    int* arr;
    int top;
    int size;

    public:
    //Constructor
    stack(int size){
        this->size=  size;
        arr= new int[size];
        top= -1;
    }

    //Destructor
    ~stack(){
        delete[] arr;
    }

    //Methods
    void push(int data){
        if (isFull()){
            cerr<< "Stack overflow!!"<< endl;
            return;
        }
        
        arr[++top]= data;
    }

    void pop(){
        if (isEmpty()){
            cerr<< "Stack underflow!!"<< endl;
            return;
        }

        top--;
    }

    int peek(){
        if (isEmpty()){
            cerr<< "Stack is empty."<< endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    bool isFull(){
        if (top< size-1){
            return false;
        }
        else{
            return true;
        }
    }

    bool isEmpty(){
        if (top== -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    stack s(5);
    s.push(4);
    s.push(2);
    s.push(0);
    s.push(7);

    cout<< s.peek()<< endl;

    s.push(6);
    s.push(3);
    s.pop();
    cout<< s.peek()<< endl;

    return 0;
}