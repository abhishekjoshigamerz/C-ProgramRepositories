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
int SearchList(Node *head,int x){
    if(head == NULL){
      return -1;
    }
    if(head->data==x){
      return 1;
    }else{
      int res = SearchList(head->next,x);
      if(res==-1){
        return -1;
      }else{
        return res+1;
      }
    }
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