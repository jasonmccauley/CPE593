#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

int count(Node *p){
    int c = 0;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}

void display(Node *p){
    while(p){
        cout << p->data << " -> " << flush;
        p = p->next;
    }
}

void Insert(Node *p, int index, int d){
    Node *temp;
    Node *head = p;

    if(index < 0 || index > count(p)){
        return;
    }
    temp = new Node;
    temp->data = d;

    if(index == 0){
        temp->next = head;
        head = temp;
    }
    else{
        for(int i=1; i<index; i++){
            p=p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

int main(){
    int A[] = {10, 20, 30, 40, 50};

    Node *temp;
    Node *last;
    Node *head = new Node;

    head->data = A[0];
    head->next = nullptr;
    last = head;

    for(int i = 1; i < sizeof(A)/sizeof(A[0]); i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;

        last->next = temp;
        last = temp;
    }

    Node *p = head;
    Insert(p, 3, 3);
    display(p);

    return 0;
}