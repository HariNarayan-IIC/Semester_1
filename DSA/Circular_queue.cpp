// Implementation of circular queue (CodeHelp by Babbar)

#include <iostream>
using namespace std;

class circular_queue{
    int* arr;
    int front;
    int rear;
    int size;

    public:
    //Constructor
    circular_queue(int size){
        this->size= size;
        arr= new int[size];
        front= -1;
        rear= -1;
    }

    // Methods
    void push(int data){
        if ((front== 0 && rear== size-1) || (rear== front-1)){
            cout<< "Queue is full"<< endl;
            return;
        }
        else if(front == -1){
            front = 0;
            rear++;
        }
        else if(rear== size-1 && front!= 0){
            rear= 0;
        }
        else{
            rear++;
        }
        arr[rear]= data;

    }

    void pop(){
        if (isEmpty()){
            cout<< "Queue is empty!!"<< endl;
            return;
        }
        else if(front== rear){
            front= rear= -1;
        }
        else if(front== size-1){
            front= 0;
        }
        else{
            front++;
        }
    }

    bool isEmpty(){
        if (front== -1){
            return true;
        }
        else{
            return false;
        }

    }
    void printQ(){
        for (int i=0; i< size; i++){
            cout<< arr[i]<< " ";
        }
        cout<< endl;
    }
};

int main(){
    circular_queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.printQ();

    q.push(6);

    q.pop();
    q.pop();
    q.pop();
    q.printQ();

    q.push(6);
    q.printQ();
    return 0;
}