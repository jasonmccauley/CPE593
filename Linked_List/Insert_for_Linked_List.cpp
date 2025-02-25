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

    for(int i = 1; i < n; i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

int count(Node *p){
    int c = 0;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}

void Display(Node *p){
    while(p != nullptr){
        cout << p->data << " -> " << flush;
        p = p->next;
    }
}

void Insert(Node *p, int index, int d){
    Node *temp;

    if(index < 0 || index > count(p)){
        return;
    }
    temp = new Node;
    temp->data = d;

    if(index == 0){
        temp->next = first;
        first = temp;
    }
    else{
        for(int i=1; i<index; i++){
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

int main(){
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    Insert(first, 0, 5);
    Insert(first, 4, 33);
    Display(first);
    return 0;
}