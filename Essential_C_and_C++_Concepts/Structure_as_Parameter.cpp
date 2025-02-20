// Structure as Parameter
// If we are sending structure as a parameter to a function it may be call by value or call by address
// Call by value:
int area(struct rectangle r1){
    return r1.length * r1.breadth;
}

int main(){
    struct rectangle r = {10, 5};
    cout << area(r) << endl;
}
// A separate object will be created in call by value method and everything will be copied in the corresponding members, this is one benefit of structure as parameter
// If you are making changes to formal parameters, it will not affect the actual parameter

// Call by reference:
int area(struct rectangle &r1){
    return r1.length * r1.breadth;
}

int main(){
    struct rectangle r = {10, 5}
    cout << area(r) << endl;
}
// Only change we need to do for call by reference is adding & in the formal parameter
// Here the new object is not created but the same object is called r1 also
// Thus new changes in the values will affect the actual parameters