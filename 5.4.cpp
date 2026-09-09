#include <iostream>
using namespace std;

inline float si(float p, float r, float t) { return (p * r * t) / 100; }

int main() {
    float p, r, t;
    cin >> p >> r >> t;
    cout << si(p, r, t);
}
