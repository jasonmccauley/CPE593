#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

int count(Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(Node *p){
    if(p != nullptr){
        return Rcount(p->next) + 1;
    }
    else{
        return 0;
    }
}

int sum(Node *p){
    int sum = 0;
    while(p != nullptr){
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int Rsum(Node *p){
    if(p == nullptr){
        return 0;
    }
    else{
        return Rsum(p->next) + p->data;
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

    for(int i=1; i < sizeof(A)/sizeof(A[0]); i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;

        last->next = temp;
        last = temp;
    }

    Node *p = head;

    cout << "Count " << count(p) << endl;
    cout << "Sum " << sum(p) << endl;

    return 0;
}