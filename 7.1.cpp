#include <iostream>
using namespace std;

class A {
    static int count;
public:
    A() { count++; }
    static void show() { cout << count; }
};

int A::count = 0;

int main() {
    A a1, a2, a3;
    A::show();
}