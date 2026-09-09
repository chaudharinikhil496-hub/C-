#include <iostream>
using namespace std;

class Bank {
    static int accounts;
public:
    Bank() { accounts++; }
    static void total() { cout << accounts; }
};

int Bank::accounts = 0;

int main() {
    Bank a1, a2, a3, a4;
    Bank::total();
}