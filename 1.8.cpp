#include <iostream>
using namespace std;

int main() {
    int n, t, s = 0, d;
    cin >> n;
    t = n;
    while(t) {
        d = t % 10;
        s += d * d * d;
        t /= 10;
    }
    cout << (s == n ? "Armstrong" : "Not Armstrong");
}
