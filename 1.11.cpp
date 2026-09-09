#include <iostream>
using namespace std;

int main() {
    
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
    
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) cout << "* ";
        cout << "\n";
    }
    
    for(int i = 1; i <= 5; i++) {
        for(int s = 1; s <= 5 - i; s++) cout << " ";
        for(int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << "\n";
    }
}
