#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    Student s[2];
    for(int i = 0; i < 2; i++) {
        cin >> s[i].name >> s[i].roll >> s[i].marks;
    }
    for(int i = 0; i < 2; i++) {
        cout << s[i].name << " " << s[i].roll << " " << s[i].marks << "\n";
    }
}
