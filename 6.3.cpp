#include <iostream>
using namespace std;

class Avg {
    float a, b, c;
public:
    void accept() { cin >> a >> b >> c; }
    friend float average(Avg);
};

float average(Avg ob) {
    return (ob.a + ob.b + ob.c) / 3;
}

int main() {
    Avg ob;
    ob.accept();
    cout << average(ob);
}