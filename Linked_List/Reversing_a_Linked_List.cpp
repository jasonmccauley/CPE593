#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *first = nullptr;

void Display(Node *p){
    while(p){
        cout << p->data << " -> " << flush;
        p=p->next;
    }
}

void Reverse2(Node *p){
    Node *q = nullptr, *r = nullptr;

    while(p != nullptr){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void Reverse3(Node *q, Node *p){
    if(p){
        Reverse3(p, p->next);
        p->next = q;
    }
    else{
        first=q;
    }
}

void create(int A[], int n){
    Node *temp, *last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for(int i=1; i<n; i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }   
}

int main(){
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    Reverse2(first);
    Display(first);

    return 0;
}