#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;
public:
    void accept();
    void display();
};

void Student::accept() {
    cin >> roll >> name >> marks;
}

void Student::display() {
    cout << roll << " " << name << " " << marks;
}

int main() {
    Student s;
    s.accept();
    s.display();
}
