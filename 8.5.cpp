#include<iostream>
using namespace std;

class Staff {
    string name,post;
    float salary;
public:
    void get() { cin>>name>>post>>salary; }
    void show() {
        if(post=="HOD") cout<<name<<" "<<post<<" "<<salary<<endl;
    }
};

int main() {
    Staff s[5];
    for(int i=0;i<5;i++) s[i].get();
    for(int i=0;i<5;i++) s[i].show();
}