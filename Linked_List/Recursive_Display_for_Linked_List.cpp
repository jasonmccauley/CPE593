#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void Display(Node *p){
    while(p != nullptr){
        cout << p->data << " -> " << flush;
        p = p->next;
    }
}

void RDisplay(Node *p){
    if(p != nullptr){
        RDisplay(p->next);
        cout << p->data << " -> " << flush;
    }
}

int main(){
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    
    Node *temp;
    Node *last;

    Node *head = new Node;
    head->data = A[0];
    head->next = nullptr;
    last = head;

    for(int i=1; i < sizeof(A)/sizeof(A[0]); i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        
        last->next = temp;
        last = temp;
    }

    Node *p = head;
    Display(p);
    RDisplay(p);

    return 0;
}