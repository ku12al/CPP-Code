#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
       this-> data = val;
       this-> next = NULL;
       this-> prev = NULL;
    }
};
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"-> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(node* &head, int val){
    node* temp = new node(val);
    
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(node* &tail, int val){
    node* n = new node(val);
    if(tail == NULL){
        tail = n;
        
        return;
    }
    tail-> next = n;
    n->prev=tail;
    tail = n;

}

void insertAtPos(node* &tail, node* &head, int pos, int val){
    
    node* temp = head;
    int cnt =1;
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }
    if(pos == 1){
        insertAtHead(head, val);
        return;
    }
    if(temp->next == NULL){
        insertAtTail(tail, val);
        return;
    }
    

    node* insert = new node(val);
    insert->next=temp->next;
    temp->next->prev=insert;
    temp->next=insert;
    insert->prev=temp;

}

int main(){
    
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    insertAtHead(head, 2);
    print(head);
    insertAtTail(head, 5);
    print(head);
    insertAtPos(tail, head, 1, 12);
    print(head);
    insertAtPos(tail, head, 2, 13);
    print(head);

}