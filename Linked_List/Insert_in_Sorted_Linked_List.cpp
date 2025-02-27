#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *first = nullptr;

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

void SortedInsert(Node *p, int x){
    Node *temp, *q = nullptr;
    temp = new Node;
    temp->data = x;
    temp->next = nullptr;

    if(first==nullptr){
        first = temp;
    }
    else{
        while(p && x > p->data){
            q = p;
            p = p->next;
        }
        if(p==first){
            temp->next = first;
            first = temp;
        }
        else{
            temp->next = q->next;
            q->next = temp;
        }
    }
}

void Display(Node *p){
    while(p){
        cout << p->data << " -> " << flush;
        p = p->next;
    }
}

int main(){
    int A[] = {10, 20, 30, 40, 50};
    
    create(A, 5);
    SortedInsert(first, 15);
    Display(first);

    return 0;
}