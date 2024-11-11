#include<iostream>
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

// insertAtHead(node* &head, int val){
//     node* n = new node(val);
    
//         n->next = head;
//         head = n;

// }

insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head != NULL){
        n->next = head;
        head = n;
    }
    node* n2 = new node(val);
    while(n2->next == head){
        n2->next = head;
    }
    node* temp = new node(val);
    temp->next = n2->next;
    n2->next = temp;
}

void display(node* head){
    node* temp = head;
    do{
        cout<<temp->next<<"->";
        temp = temp->next;
    }
    while(temp->next != head);
}


int main(){

    node* head = NULL;

    insertAtTail(head, 5);
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 3);
    display(head);

    return 0;
    


}