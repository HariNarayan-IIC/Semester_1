// Doubly linked list implementation

#include <iostream>
using namespace std;

class node{
    public:
    node* prev;
    int data;
    node* next;

    //Constructor
    node(){
        this->prev= NULL;
        this->data= 0;
        this->next= NULL;
    }

    //Parameterised constructor
    node(int data){
        this->prev= NULL;
        this->data= data;
        this->next= NULL;
    }

    //Destructor
    ~node(){
        cout<< "Node destructed"<< endl;
    }
};


class doubly_linked_list{
    public:
    int length;
    node* head;
    node* tail;

    //Constructor
    doubly_linked_list(){
        this->length= 0;
        this->head= NULL;
        this->tail= NULL;
    }

    //Parameterised constructor
    doubly_linked_list(int size){
        this->length= size;
        if (size==0){
            doubly_linked_list();
            return;
        }
        else if(size == 1){
            node* temp= new node;
            this->head= temp;
            this->tail= temp;
        }
        else{
            head= new node;
            tail= new node;
            head->next= tail;
            tail->prev= head;
            for (int i= 1; i< size-1; i++){
                node *temp= new node;
                temp->next= head->next;
                temp->prev= head;
                head->next= temp;
                temp->next->prev= temp; 
            }
        }
    }


    //Destructor
    ~doubly_linked_list(){
        cout<< "Destructor called"<< endl;
        int i= 1;
        while(this->length!= 0){
            cout<<i << endl;
            delete_node(0);
            i++;
        }
    }

    //Methods

    //Function to print the entire linked list
    void print(){
        node* ptr= this->head;
        for (int i= 0; i< this->length; i++){
            cout<< ptr->data<< " ";
            ptr= ptr->next;
        }
        cout<< endl;
    }

    //Function to print the entire linked list in reverse
    void reverse_print(){
        node* ptr= this->tail;
        for (int i= 0; i< this->length; i++){
            cout<< ptr->data<< " ";
            ptr= ptr->prev;
        }
        cout<< endl;
    }

    //Function to modify existing data by entering index no
    void modify(int index, int data){
        if (this->length== 0){
            cout<< "No element to modify"<< endl;
            return;
        }
        if (index< 0 || index>= this->length){
            cout<< "Index out of range"<< endl;
            return;
        }
        node* ptr= this->head;
        for(int i=0; i< index; i++){
            ptr= ptr->next;
        }
        ptr->data= data;
    }

    void insertAtHead(){}

    void insertAtTail(){}

    void insert(){}

    void delete_node(int index){
        if (this->length== 0){
            return;
        }
        if (index< 0 || index> this->length-1){
            cout<< "Index out of range!"<< endl;
            return;
        }
        if (index== 0){
            node* ptr= this->head;
            this->head= ptr->next;
            ptr->next= NULL;
            delete ptr;
            if (this->length!= 1){this->head->prev= NULL;}
            this->length--;
            return;
        }

        node* ptr= this->head;
        for (int i= 0; i< index; i++){
            ptr= ptr->next;
        }
        ptr->prev->next= ptr->next;
        ptr->next->prev= ptr->prev;
        ptr->prev= NULL;
        ptr->next= NULL;
        delete ptr;
        this->length--;
        
    }

};

int main(){
    doubly_linked_list A(4);
    A.modify(0, 5);
    A.modify(1, 4);
    A.modify(2, 3);
    A.modify(3, 2);
    A.print();
    A.reverse_print();
    return 0;
}