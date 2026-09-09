#include<iostream>
using namespace std;

class Customer {
    int id;
    string name;
public:
    void get() { cin>>id>>name; }
    void show() { cout<<id<<" "<<name<<endl; }
};

int main() {
    Customer c[5];
    for(int i=0;i<5;i++) c[i].get();
    for(int i=0;i<5;i++) c[i].show();
}