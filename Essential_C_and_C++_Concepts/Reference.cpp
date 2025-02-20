// A reference is just another name for the same variable
// Example:

int main(){
    int a = 10;
    int &r = a; // syntax of reference
    cout << a;
    r++;
    cout << r;
    cout << a;
}

// This is used for parameter passing
// For writing small functions we use reference
