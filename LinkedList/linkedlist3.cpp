//traversing a linked list recursively

//traversing a linked list recursively
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
    if(head == NULL){
      return;
    }
    cout << head->data << " ";
    PrintList(head->next);
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    head->next = second;
    second->next = third;
    PrintList(head);
}