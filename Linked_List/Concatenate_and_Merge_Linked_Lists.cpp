#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *first = nullptr, *second = nullptr, *third = nullptr;

void Display(Node *p){
    while(p){
        cout << p->data << " -> " << flush;
        p=p->next;
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

void create2(int A[], int n){
    Node *temp, *last;
    second = new Node;
    second->data = A[0];
    second->next = nullptr;
    last = second;

    for(int i = 1; i < n; i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

void Merge(Node *p, Node *q){
    Node *last;
    if(p->data < q->data){
        third = last = p;
        p = p->next;
        last->next = nullptr;
    }
    else{
        third = last = q;
        q = q->next;
        last->next = nullptr;
    }
    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = nullptr;
        }
        else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = nullptr;
        }
    }
    if(p) last->next = p;
    if(q) last->next = q;
}

int main(){
    int A[] = {10, 20, 30, 40, 50};
    int B[] = {15, 18, 25, 30, 55};
    create(A, 5);
    create2(B, 5);

    Merge(first, second);
    Display(third);

    return 0;
}