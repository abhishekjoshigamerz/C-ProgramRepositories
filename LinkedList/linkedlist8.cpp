//delete first element in linked 
#include <iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int x){
        data = x;
        next = NULL;
    }
};

Node *DeleteFirst(Node *head){
    if(head==NULL){
        return NULL;
    }else{
        Node *temp = head->next;
        delete head;
        return temp;
    }  
}
void PrintList(Node *head){
  Node *curr = head;
  while(curr!=NULL){
    cout << curr->data << " ";
    curr = curr->next;
  }
}
int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head = DeleteFirst(head);
    PrintList(head);
}