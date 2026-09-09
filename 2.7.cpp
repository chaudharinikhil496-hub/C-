#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float m[5];
    for(int i = 0; i < 5; i++) cin >> m[i];
    cout << left << setw(12) << "Subject" << right << setw(8) << "Marks\n";
    cout << setfill('-') << setw(20) << "\n" << setfill(' ');
    for(int i = 0; i < 5; i++)
        cout << left << setw(12) << ("Sub" + to_string(i+1))
             << right << setw(8) << fixed << setprecision(2) << m[i] << "\n";
}
