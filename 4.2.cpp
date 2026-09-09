#include <iostream>
using namespace std;

class Rectangle {
    float l, b;
public:
    void accept();
    void area();
};

void Rectangle::accept() {
    cin >> l >> b;
}

void Rectangle::area() {
    cout << l * b;
}

int main() {
    Rectangle r;
    r.accept();
    r.area();
}
