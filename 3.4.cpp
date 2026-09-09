#include <iostream>
using namespace std;

class Rectangle {
    float l, b;
public:
    void accept() { cin >> l >> b; }
    void area() { cout << l * b; }
};

int main() {
    Rectangle r;
    r.accept();
    r.area();
}
