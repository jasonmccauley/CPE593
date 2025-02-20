// Pass by value:
// In pass by value, actual parameters will not be modified if any changes are done to the formal parameters
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    cout << a << b << endl;
}

// Call by address:
// Here the address of actual parameters are passed to the formal parameter and formal parameters must be pointers
// Any changes done inside the function will modify the actual parameters
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;
    a = 10;
    b = 20;
    swap(&a, &b);
    cout << a << b << endl;
}

// Call by reference:
// References are part of C++ programming, its one of the most useful and powerful mechanisms of this language
// To make a function as call by reference, we just need to add & in the formal parameters, these are the references
void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    cout << a << b << endl;
}