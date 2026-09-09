#include <iostream>
using namespace std;

class Demo {
    static int shared;
    int id;
public:
    Demo(int i) { id = i; shared++; }
    void show() { cout << id << " " << shared << "\n"; }
};

int Demo::shared = 0;

int main() {
    Demo d1(1), d2(2), d3(3);
    d1.show(); d2.show(); d3.show();
}