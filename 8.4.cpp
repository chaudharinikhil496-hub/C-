#include<iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float per;
public:
    void get() { cin>>roll>>name>>per; }
    void show() { if(per>75) cout<<name<<endl; }
};

int main() {
    Student s[10];
    for(int i=0;i<10;i++) s[i].get();
    for(int i=0;i<10;i++) s[i].show();
}