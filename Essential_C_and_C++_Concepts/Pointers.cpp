/*
Pointer is an address variable that is meant for storing address of not data itself
Theyare used for indirect access to data
For a program to use heap memory, pointers are used
To access heap memory and resources outside main memory like internet, keyboard, monitor, etc., pointers are used
Pointers are also used for parameter passing
*/
int main(){
    int a = 10; // data variable
    int *p; // declaration
    p = &a; // assignment/initialization
    cout << a << endl;
    cout << *p << endl; // dereferencing 
}

// Accessing Heap memory through pointer
#include <stdio.h>
int main(){
    int *p;
    p = new int[5];
}