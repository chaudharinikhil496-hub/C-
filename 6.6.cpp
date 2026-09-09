#include <iostream>
using namespace std;

class Box {
    int l;
public:
    void set(int x) { l = x; }
    friend void compare(Box, Box);
};

void compare(Box a, Box b) {
    if(a.l > b.l) cout << "First larger";
    else if(a.l < b.l) cout << "Second larger";
    else cout << "Equal";
}

int main() {
    Box b1, b2;
    b1.set(10); b2.set(20);
    compare(b1, b2);
}