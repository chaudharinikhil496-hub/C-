#include <iostream>
using namespace std;

class Account {
    int accNo;
    string name;
    float balance;
public:
    void accept() { cin >> accNo >> name >> balance; }
    void display() { cout << "Balance: " << balance; }
};

int main() {
    Account a;
    a.accept();
    a.display();
}
