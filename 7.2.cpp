#include <iostream>
using namespace std;

class Employee {
    static int total;
public:
    Employee() { total++; }
    static void display() { cout << total; }
};

int Employee::total = 0;

int main() {
    Employee e1, e2, e3;
    Employee::display();
}