#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class LinkedList{
private:
    Node *first;
public:
    LinkedList(){
        first = nullptr;
    }
    LinkedList(int A[], int n);
    ~LinkedList();

    void Display();
    void Insert(int index, int x);
    int Delete(int index);
    int Length();
};

LinkedList::LinkedList(int A[], int n){
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

LinkedList::~LinkedList(){
    Node *p = first;
    while(first){
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList::Display(){
    Node *p = first;

    while(p){
        cout << p->data << " -> " << flush;
        p = p->next;
    }
    cout << endl;
}

int LinkedList::Length(){
    Node *p = first;
    int len = 0;

    while(p){
        len++;
        p = p->next;
    }
    return len;
}

void LinkedList::Insert(int index, int x){
    Node *temp, *p = first;

    if(index < 0 || index > Length()){
        return;
    }
    temp = new Node;
    temp->data = x;
    temp->next = nullptr;

    if(index == 0){
        temp->next = first;
        first = temp;
    }
    else{
        for(int i = 1; i < index; i++){
            p=p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}

int LinkedList::Delete(int index){
    Node *q,*p = nullptr;
    int x = -1;

    if(index < 1 || index > Length()){
        return -1;
    }
    if(index == 1){
        p = first;
        first = first->next;
        x = p->data;
        delete p;
    }
    else{
        p = first;
        for(int i = 1; i < index; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    return x;
}

int main(){
    int A[] = {1, 2, 3, 4, 5};
    LinkedList l(A, 5);

    l.Insert(3, 10);

    l.Display();

    return 0;
}