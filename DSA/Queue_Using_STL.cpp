//Queue using standard library (CodeHelp by Babbar)

#include <iostream>
#include <queue>
using namespace std;

int main(){
    //Creating a queue
    queue <int> q;

    q.push(12);
    q.push(1);
    q.push(4);
    cout<<"Front: "<< q.front()<< endl;

    cout<< "Size of queue: "<< q.size()<< endl;

    q.pop();

    cout<< "Front: "<< q.front()<< endl;

    cout<< "Size of queue: "<< q.size()<< endl;

    if (q.empty()){
        cout<< "Queue is empty."<< endl;
    }
    else{
        cout<< "Queue is not empty."<< endl;
    }

    return 0;
}