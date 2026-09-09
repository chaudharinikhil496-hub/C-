#include <iostream>
using namespace std;

int num = 100;

int main() {
    int num = 50;
    cout << "Local: " << num << "\nGlobal: " << ::num;
}
