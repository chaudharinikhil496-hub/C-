#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        int t = a + b;
        a = b;
        b = t;
    }
}
