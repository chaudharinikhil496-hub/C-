#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float sal;
public:
    void accept() { cin >> id >> name >> sal; }
    friend void display(Employee);
};

void display(Employee e) {
    cout << e.id << " " << e.name << " " << e.sal;
}

int main() {
    Employee e;
    e.accept();
    display(e);
}