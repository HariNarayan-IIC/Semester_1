//Program to implement Doubly ended queue (CodeHelp by Babbar)

#include <iostream>
using namespace std;

class dequeue{
    private:
    int* arr;
    int front;
    int rear;
    int size;

    public:
    //Constructor
    dequeue(int size){
        this->size= size;
        arr= new int[size];
        front= -1;
        rear= -1;
    }

    //Methods / Properties

    void push_front(int data){
        //Check if queue is full
        if ((front== 0 && rear== size-1) || (rear== front-1)){
            cout<< "Queue is full!!"<< endl;
            return;
        }
        //Condition for first element
        else if(front== -1){
            front= rear= 0;
        }
        //Condition to ensure circular behaviour
        else if(front== 0){
            front= size-1;
        }
        //Normal condition
        else{
            front--;
        }
        arr[front]= data;
        return;
    }

    void push_rear(int data){
        //Check if queue is full
        if ((front== 0 && rear== size-1) || (rear== front-1)){
            cout<< "Queue is full!!"<< endl;
            return;
        }
        //Condition for first element
        else if(front== -1){
            front= rear= 0;
        }
        //Condition to ensure circular behaviour
        else if (rear== size-1){
            rear= 0;
        }
        //Normal Condition
        else{
            rear++;
        }
        arr[rear]= data;
        return;
    }

    void pop_front(){
        //Check if queue is empty
        if (front == -1){
            cout<< "Queue is empty!!"<< endl;
            return;
        }
        //Condition for single element in queue
        else if(front == rear){
            front= rear= -1;
        }
        // Condition to ensure circular behaviour
        else if(front== size-1){
            front= 0;
        }
        //Normal condition
        else{
            front++;
        }
    }

    void pop_rear(){
        //Check if queue is empty
        if(front== -1){
            cout<< "Queue is empty!!"<< endl;
            return;
        }
        //Condition for single element on queue
        else if(front== rear){
            front= rear= -1;
        }
        //Condition to ensure circular behaviour
        else if(rear==0){
            rear= size-1;
        }
        //Normal condition
        else{
            rear--;
        }
    }
    void printQ(){
        cout<< endl;
        if (front== -1){
            cout<< "Queue is empty"<< endl;
        }
        else if (front<= rear){
            for (int i= front; i<= rear; i++){
                cout<< arr[i]<< " ";
            }
            cout<< endl;
        }
        else{
            for (int i= front; i< size; i++){
                cout<< arr[i]<< " ";
            }
            for (int i= 0; i<= rear; i++){
                cout<< arr[i]<< " ";
            }
            cout<< endl;
        }
        cout<< endl;
    }
};

int main(){
    dequeue q(5);
    q.push_front(23);
    q.push_rear(12);
    q.push_rear(90);
    q.push_front(1);
    q.push_front(0);
    q.printQ();

    q.pop_rear();
    q.pop_front();
    q.printQ();

    return 0;
}