#include<iostream>
using namespace std;

class Book {
    int id;
    string name;
public:
    void get() { cin>>id>>name; }
    void show() { cout<<id<<" "<<name<<endl; }
};

int main() {
    Book b[5];
    for(int i=0;i<5;i++) b[i].get();
    for(int i=0;i<5;i++) b[i].show();
}