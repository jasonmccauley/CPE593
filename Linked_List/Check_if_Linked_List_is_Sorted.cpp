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

int isSorted(Node *p){
    int x = INT_MIN;

    while(p != nullptr){
        if(p->data < x){
            return 0;
        }
        x = p->data;
        p = p->next;
    }
    return 1;
}

int main(){
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    if(isSorted(first)){
        cout << "Linked list is sorted" << endl;
    }
    else{
        cout << "Linked list is not sorted" << endl;
    }

    return 0;
}