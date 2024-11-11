#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n-> next = head;
    head = n;
}

void inserAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;

    }
    temp->next = n;
}
void fintPointers(node* head){
    node* temp=head;
    int firstIndex = -1;
    int secondIndex = -1;
    int count = 1;
    while(temp->next!=NULL){
        if(temp->data==0){  //if it's a node with zero value
            if(firstIndex==-1){ //when it's very first time we saw zero
                firstIndex = count;
            }else{                // if we already saw zero somewhere, provavly it's second index
                secondIndex = count;
            }
        }
        temp=temp->next;     // move the pointer to next node
        count++;             // count++ to keep a track of indices
    }
    cout<< firstIndex<<" "<<secondIndex<<endl;
}
void insertAtMiddle(node* &head, int position, int val){
    node* pos = head;
    int cnt = 1;
    while(cnt < position-1){
        pos = pos->next;
        cnt++;
    } 
    node* temp = new node(val);
    temp->next = pos->next;
    pos-> next=temp;
}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data << " -> ";
        temp = temp->next;

    }
    cout<< "NULL" << endl;
}
int main(){
    node* head = NULL;


    insertAtHead(head, 6);
    display(head);
    inserAtTail(head, 1);
    display(head);
    inserAtTail(head, 0);
    display(head);
    insertAtMiddle(head,3, 9);
    display(head);
    inserAtTail(head, 0);
    display(head);
    inserAtTail(head, 4);
    display(head);
    fintPointers(head);
    return 0;
}