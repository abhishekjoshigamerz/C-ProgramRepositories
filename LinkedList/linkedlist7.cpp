//insert at the end of a linked list
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
void PrintList(Node *head){
  Node *curr = head;
  while(curr!=NULL){
    cout << curr->data << " ";
    curr = curr->next;
  }
}
Node *InsertatEndinList(Node *head,int x){
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    Node *curr = head;
    while(curr->next != NULL){
        curr=curr->next;
    }
    curr->next = temp;
    return head;
}
int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    int x = 30;
    head->next = second;
    second->next = third;
    head = InsertatEndinList(head,x);
    PrintList(head);
}