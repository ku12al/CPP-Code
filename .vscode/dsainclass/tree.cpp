#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left =NULL;
        right =NULL;
    }
};
void preorder(struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<' ';
    preorder(root -> left);
    preorder(root -> right);

}
void inorder(struct Node* root){
    if(root == NULL){
        return;
    }
    preorder(root -> left);
    cout<<root->data<<' ';
    preorder(root -> right);

}
void postorder(struct Node* root){
    if(root == NULL){
        return;
    }
    preorder(root -> left);
    preorder(root -> right);
    cout<<root->data<<' ';

}
void traversal(Node* root){
    if(root == NULL)return;
    traversal(root -> left);
    cout<<root -> data<< ' ';
    traversal(root -> right);

}
int main(){
    struct Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);


    root -> right-> left = new Node(4);
    root -> right -> right = new Node(5);

    root -> right -> right ->left  = new Node(6);
    root -> right -> right -> right = new Node(7);

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    
}