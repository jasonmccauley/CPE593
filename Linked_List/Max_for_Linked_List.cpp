#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

int Max(Node *p){
    int max = INT_MIN;
    while(p){
        if(p->data > max){
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int RMax(Node *p){
    int x = 0;
    if(p == 0){
        return INT_MIN;
    }
    x = RMax(p->next);
    if(x > p->data){
        return x;
    }
    else{
        return p->data;
    }
}

int main(){
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};

    Node *head = new Node;
    Node *last;
    Node *temp;

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
    cout << "Max " << Max(p);

    return 0;
}