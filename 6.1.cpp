#include <iostream>
using namespace std;

class Num {
    int a, b;
public:
    void accept() { cin >> a >> b; }
    friend int max(Num);
};

int max(Num n) {
    return n.a > n.b ? n.a : n.b;
}

int main() {
    Num n;
    n.accept();
    cout << max(n);
}
