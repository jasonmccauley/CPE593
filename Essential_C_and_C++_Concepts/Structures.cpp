/*
    Collection of data members under one name is structure
    Data members can be of similar type or non similar type
    When structures is called in the main() program, then it will consume space accordingly to the data member types it contains in memory
    An example of structure is program of a rectangle
*/

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r; // Declaration
    struct Rectangle r = {10, 5}; // Declaration + Initialization
    r.length = 15; // . is used to access a member
    r.breadth = 10;

    cout << "Area of a rectangle is " << r.length * r.breadth << endl; // Accessing the members
}

/*    
    Use of structures:
    Structures is used to combine data under one name, thus some example usage of structures is
    In complex numbers
    In student details
    In employee details
    Bank details
    Defining shapes
*/