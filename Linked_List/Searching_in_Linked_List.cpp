#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

Node * LSearch(Node *p, int key){
    Node *q = new Node;
    Node *head = q;

    while(p != nullptr){
        if(p->data == key){
            q->next = p->next;
            p->next = head;
            head = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return nullptr;
}

Node * RSearch(Node *p, int key){
    if(p == nullptr){
        return nullptr;
    }
    if(p->data == key){
        return p;
    }
    else{
        return RSearch(p->next, key);
    }
}

int main(){
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};

    Node *head = new Node;
    Node *temp;
    Node *last;

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

    Node *p;
    p = LSearch(head, 25);
    cout << p->data << endl;

    return 0;
}