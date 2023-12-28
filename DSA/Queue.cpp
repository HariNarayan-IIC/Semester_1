//Implementing queue data structure (CodeHelp by Babbar)

#include <iostream>
using namespace std;

class queue{
    int* arr;
    int Front;
    int Back;
    int Size;

    public:
    //Constructor
    queue(int size){
        this->Size= size;
        arr= new int[size];
        this->Front= 0;
        this->Back= 0;
    }

    //Methods
    void push(int data){
        if (Back< Size){
            arr[Back]= data;
            Back++;
        }
        else{
            cout<< "Queue is full"<< endl;
        }
    }

    void pop(){
        if (Front == Back){
            cout<< "Queue is empty!!"<< endl;
            return;
        }
        Front++;
        if (Front == Back){
            Front= 0;
            Back= 0;
        }
    }

    int front(){
        if (Front== Back){
            cout<< "Queue is empty!!"<< endl;
            return -1;
        }
        return arr[Front];
    }

    int back(){
        if (Front== Back){
            cout<< "Queue is empty!!"<< endl;
            return -1;
        }
        return arr[Back-1];
    }

    bool isEmpty(){
        if (Front== Back){
            return true;
        }
        else{
            return false;
        }
    }

    int size(){
        return Back- Front;
    }
};

int main(){
    queue q(5);
    q.push(5);
    q.push(4);
    q.push(12);
    cout<< "front: "<< q.front()<< endl;
    cout<< "back: "<< q.back()<< endl;
    cout<< "Size of Queue: "<< q.size()<< endl;

    q.pop();
    q.pop();
    q.pop();

    cout<< "front: "<< q.front()<< endl;
    cout<< "back: "<< q.back()<< endl;

    if (q.isEmpty()){
        cout<< "Queue is empty"<< endl;
    }
    else{
        cout<< "Queue is not empty"<< endl;
    }
    return 0;
}