// Syntax 1
// When variable is already existing, then we can use pointer to structure like
struct Rectangle {
    int length;
    int breadth;
};

int main(){
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;
    r.length = 15;
    p -> length = 20;
    // Or
    (*p).length = 20;
};

// Syntax 2
// Dynamically object created in heap and pointer pointing there
struct Rectangle {
    int length;
    int breadth;
};

int main(){
    struct Rectangle *p;
    (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p -> length = 10;
    p -> breadth = 5;
};
