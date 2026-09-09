#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
public:
    void accept() { cin >> id >> name; }
    void display() { cout << id << " " << name; }
};

int main() {
    Employee e;
    e.accept();
    e.display();
}
