#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    float marks;
public:
    void accept();
    void display();
};

void Student::accept() {
    cin >> rollNo >> name >> marks;
}

void Student::display() {
    cout << rollNo << " " << name << " " << marks;
}

int main() {
    Student s;
    s.accept();
    s.display();
}
