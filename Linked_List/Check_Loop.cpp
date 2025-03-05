#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node *first = nullptr;

void Display(Node *p){
    while(p != nullptr){
        cout << p->data << " -> " << endl;
        p = p->next;
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

int isLoop(Node *f){
    Node *q, *p;
    q = p = f;
    do{
        p = p->next;
        q = q->next;
        q = q? q->next: q; 
    }
    while(p && q && p != q);
    
    if(p == q){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    Node *t1, *t2;

    int A[] = {10, 20, 30, 40 ,50};
    create(A, 5);

    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;

    cout << isLoop(first) << endl;

    return 0;
}