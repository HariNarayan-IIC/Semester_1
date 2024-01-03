//Binary Tree implementation

#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;

    //Constructor
    node(int data){
        val= data;
        left= NULL;
        right= NULL;
    }
};

node* buildTree(node* root){
    int data;
    cout<< "Enter node data: ";
    cin>> data;
    if (data== -1){
        return NULL;
    }
    root= new node(data);

    cout<< "Enter data for inserting in left of "<<data<< endl;
    root->left= buildTree(root->left);
    
    cout<< "Enter data for inserting in right of "<<data<<endl;
    root->right= buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    
    if (root== NULL){
        return;
    }
    cout<< endl;
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp= q.front();
        q.pop();
        if (temp== NULL){
            cout<< endl;
            if (!q.empty()){
                q.push(NULL);
            }
            continue;
        }
        cout<< temp->val<< " ";
        if (temp->left!= NULL){
            q.push(temp->left);
        }
        if (temp->right!= NULL){
            q.push(temp->right);
        }
        
        
    }
    cout<< endl;

}

int main(){
    node* root;
    root= buildTree(root);
    levelOrderTraversal(root);
    //1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1

    return 0;
}