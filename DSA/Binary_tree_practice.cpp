//Binary tree practice

#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    //Constructor
    node(int data){
        this->data= data;
        left= NULL;
        right= NULL;
    }
};

node* buildTree(node* root){
    int data;
    cout<< "Enter data into node: ";
    cin>> data;
    if (data== -1){
        return root;
    }
    root= new node(data);

    cout<< "Do u want to enter data in left of "<< data<< endl;
    root->left= buildTree(root->left);

    cout<< "Do u want to enter data at right of "<< data<< endl;
    root->right= buildTree(root->right);
}

void levelOrderTraversal(node* root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    node* ptr;
    
    while(!q.empty()){
        ptr= q.front();
        q.pop();
        if (ptr==NULL){
            cout<<endl;
            if (!q.empty()){
                q.push(NULL);
            }
            continue;
        }
        cout<< ptr->data<< " ";
        if (ptr->left!= NULL) q.push(ptr->left);
        if (ptr->right!= NULL) q.push(ptr->right);
    }
}

void inOrder(node* root){
    if (root== NULL) return;
    inOrder(root->left);
    cout<< root->data<< " ";
    inOrder(root->right);
}

void preOrder(node* root){
    if (root== NULL) return;
    cout<< root->data<< " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<< root->data<< " ";
}

int main(){
    node* root= buildTree(root);
    //5 6 3 -1 -1 2 -1 -1 1 4 -1 -1 -1
    cout<< endl;
    levelOrderTraversal(root);
    inOrder(root);
    cout<< endl;
    preOrder(root);
    cout<< endl;
    postOrder(root);
    cout<< endl;

    return 0;
}