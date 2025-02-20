/*
Function is a piece of code which performs a specific task
Grouping instructions is called function
They are called as modules or procedures
Main task can be divided into several small tasks in the forms of functions -- this type of programming is called modular or procedural programming
Easy for development
Group of programmers can work on a single project using functions
Functions provide reusability of code
It can be used in other software projects as well
You can group functions into a library
*/

// Example
int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    int x, y, z;
    x = 10;
    y = 5;
    z = add(x, y);
    cout << "Sum is " << z << endl;
}