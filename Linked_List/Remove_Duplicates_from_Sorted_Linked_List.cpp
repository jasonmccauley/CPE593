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

void RemoveDuplicate(Node *p){
    Node *q = p->next;
    while(q != nullptr){
        if(p->data != q->data){
            p = q;
            q = q->next;
        }
        else{
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main(){
    int A[] = {10, 20, 20, 40, 50, 50, 50, 60};
    create(A, 8);

    RemoveDuplicate(first);
    Display(first);

    return 0;
}