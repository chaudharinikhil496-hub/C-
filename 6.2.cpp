#include <iostream>
using namespace std;

class A {
    int x;
public:
    void set(int v) { x = v; }
    friend int add(A, class B);
};

class B {
    int y;
public:
    void set(int v) { y = v; }
    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a; B b;
    a.set(10); b.set(20);
    cout << add(a, b);
}