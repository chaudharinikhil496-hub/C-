#include <iostream>
using namespace std;

class Mix {
    static int count;
    int value;
public:
    Mix(int v) { value = v; count++; }
    void show() { cout << value << " " << count << "\n"; }
    static void total() { cout << count; }
};

int Mix::count = 0;

int main() {
    Mix m1(10), m2(20);
    m1.show(); m2.show();
    Mix::total();
}