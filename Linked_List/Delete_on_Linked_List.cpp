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

void Display(Node *p){
    while(p != nullptr){
        cout << p->data << " -> " << flush;
        p=p->next;
    }
}

int count(Node *p){
    int c = 0;
    while(p){
        c++;
        p=p->next;
    }
    return c;
}

int Delete(Node *p, int index){
    Node *q = nullptr;
    int x = -1;

    if(index < 1 || index > count(p)){
        return -1;
    }
    if(index == 1){
        q=first;
        x = q->data;
        first = first->next;
        delete q;
        return x;
    }
    else{
        for(int i = 1; i < index; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

int main(){
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    cout << "Deleted Node: " << Delete(first, 2) << endl;
    Display(first);

    return 0;
}