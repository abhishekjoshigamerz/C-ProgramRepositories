//searching in a linked list


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
int SearchList(Node *head,int x){
    int position = 1;
    Node *curr = head;
    while(curr!=NULL){
        if(curr->data==x){
          return position;
        }else{
         position++;
         curr= curr->next; 
        }
    }
    return -1;
}

int main(){
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    int x = 30;
    head->next = second;
    second->next = third;
    cout << SearchList(head,x);
}