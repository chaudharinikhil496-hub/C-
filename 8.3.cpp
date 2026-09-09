#include<iostream>
using namespace std;

class Employee {
    string name,dept;
    int id;
public:
    void get() { cin>>name>>id>>dept; }
    void show() { cout<<name<<" "<<id<<" "<<dept<<endl; }
};

int main() {
    Employee e[5];
    for(int i=0;i<5;i++) e[i].get();
    for(int i=0;i<5;i++) e[i].show();
}