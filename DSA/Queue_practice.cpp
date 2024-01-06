//Queue implementaion practice

#include <iostream>
using namespace std;

class queue{
    int * arr;
    int front;
    int rear;
    int size;

    public:
    //Constructor
    queue(int size){
        this->size= size;
        arr= new int[size];
        rear= -1;
        front= -1;
    }

    //Destructor
    ~queue(){
        delete[] arr;
    }

    //Methods/Behaviours
    void push(int data){
        if (isFull()){
            cout<< "Queue is full!!"<< endl;
            return;
        }
        else if (isEmpty()){
            front= 0;
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
        else if(front == rear){
            front= rear= -1;
        }
        else{
            front++;
        }
    }

    int Front(){
        if (isEmpty()){
            cout<< "Queue is empty!!"<< endl;
            return -1;
        }
        return arr[front];
    }

    int Rear(){
        if (isEmpty()){
            cout<< "Queue is empty!!"<< endl;
            return -1;
        }
        return arr[rear];
    }

    int Size(){
        return rear-front+1;
    }

    bool isEmpty(){
        if (front== -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull(){
        if (rear== size-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    queue q(5);
    cout<< q.Front()<< endl;

    q.push(1);
    q.push(2);
    q.push(3);

    cout<< q.Front()<< endl;
    cout<< q.Rear()<< endl;
    cout<< q.Size()<< endl;

    q.pop();

    if (q.isEmpty()){
        cout<< "Queue is empty."<< endl;
    }
    else{
        cout<< "Queue is not empty."<< endl;
    }

    return 0;
}