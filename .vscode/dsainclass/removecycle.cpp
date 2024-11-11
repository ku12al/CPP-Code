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
}

void removeCycle(node* head){
    node* slow = head;
    node* fast = head;

    while(slow != fast){
        slow = slow -> next;
        fast = fast->next->next;
    }
    fast = head;
    while(slow->next != fast->next){
        fast = fast->next;
        slow = slow->next;
    }
    slow-> next = NULL;

}