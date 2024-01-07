//Linked list implementation practice
#include <iostream>
using namespace std;

class linked_list; //Forward declaration

class node{
    int data;
    node* next;

    public:
    //Constructor
    node(int data){
        this->data= data;
        this->next= NULL;
    }
    friend linked_list;
};

class linked_list{
    node* head;
    int size;

    public:
    //Constructor
    linked_list(){
        head= NULL;
        size= 0;
    }

    linked_list(int size){
        head= new node(0);
        this->size= size;
        for (int i= 0; i< size-1; i++){
            node* temp= new node(0);
            temp->next= head;
            head= temp;
        }
    }

    //Destructor
    ~linked_list(){
        node *temp;
        while(!isEmpty()){
            temp= head;
            head= head->next;
            cout<< "Node deleted: "<< temp->data<< endl;
            delete temp;
            size--;
        }
    }

    //Methods/Behaviour
    void insertAtHead(int data){
        node* temp= new node(data);
        temp->next= head;
        head= temp;
        size++;
    }

    void insertAtTail(int data){
        if (isEmpty()){
            insertAtHead(data);
            return;
        }
        node* temp= new node(data);
        node* ptr= head;
        while(ptr->next!= NULL){
            ptr= ptr->next;
        }
        ptr->next= temp;
        size++;
    }

    void insertAtIndex(int data, int Index){
        if (Index== 0 || isEmpty()){
            insertAtHead(data);
            return;
        }
        if (Index>= size || Index< 0){
            cout<< "Invalid request!!"<< endl;
        }
        node* temp= new node(data);
        node* ptr= head;
        for (int i= 0; i< Index-1; i++){
            ptr= ptr->next;
        }
        temp->next= ptr->next;
        ptr->next= temp;
        size++;
    }

    void modifyAtIndex(int Index, int data){
        node* ptr= head;
        for (int i= 0; i< Index; i++){
            ptr= ptr->next;
        }
        ptr->data= data;
    }

    bool isEmpty(){
        if (size== 0){
            return true;
        }
        else{
            return false;
        }
    }

    bool search(int data){
        if (isEmpty()){
            return false;
        }
        node* ptr= head;
        while(ptr!= NULL){
            if (ptr->data== data){
                return true;
            }
            ptr= ptr->next;
        }
        return false;
    }

    int fetch(int Index){
        if (isEmpty()){
            cout<< "List is empty!!"<< endl;
            return -1;
        }
        if (Index< 0 || Index> size-1){
            cout<< "Invalid index!!"<< endl;
            return -1;
        }

        node* ptr= head;
        for (int i= 0; i< Index; i++){
            ptr= ptr->next;
        }
        return ptr->data;
    }

    void deleteAtHead(){
        if (isEmpty()){
            cout<< "List is empty!!"<< endl;
            return;
        }
        node* ptr= head;
        head= head->next;
        ptr->next= NULL;
        delete ptr;
        size--;
    }

    void deleteAtIndex(int Index){
        if (isEmpty()){
            cout<< "List is empty!!"<< endl;
            return;
        }
        if (Index< 0 || Index >= size){
            cout<< "Invalid index!!"<< endl;
            return;
        }
        if (Index== 0){
            deleteAtHead();
            return;
        }
        node* ptr= head;
        for (int i= 0; i< Index-1; i++){
            ptr= ptr->next;
        }
        node* temp= ptr->next;
        ptr->next= ptr->next->next;
        temp->next= NULL;
        delete temp;
        size--;
    }

    void deleteAtTail(){
        node *ptr= head;
        while(ptr->next->next!= NULL){
            ptr= ptr->next;
        }
        delete ptr->next;
        ptr->next= NULL;
        size--;
        if (size==0) head= NULL;
    }

    void printLL(){
        if (isEmpty()){
            return;
        }
        node *ptr= head;
        while(ptr!= NULL){
            cout<< "["<< ptr->data<< "]"<< "->";
            ptr= ptr->next;
        }cout<< "NULL"<< endl;
    }
};
 
int main(){
    linked_list L;
    if (L.isEmpty()){
        cout<< "L is empty."<< endl;
    }
    else{
        cout<< "L is not empty."<< endl;
    }
    L.insertAtHead(5);
    L.insertAtHead(4);
    L.insertAtHead(3);
    L.printLL();
    L.deleteAtIndex(1);
    L.printLL();
    if (L.search(4)){
        cout<< "4 is present in LL"<< endl;
    }
    else{
        cout<< "4 is absent in LL"<< endl;
    }
    cout<< L.fetch(1)<< endl;
    L.insertAtIndex(4,1);
    L.insertAtTail(6);
    L.modifyAtIndex(2, 8);
    L.printLL();
    L.deleteAtTail();
    L.printLL();
    return 0;
}