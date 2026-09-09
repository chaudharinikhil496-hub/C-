#include <iostream>
using namespace std;

class Book {
    string title, author;
    float price;
public:
    void accept() { cin >> title >> author >> price; }
    void display() { cout << title << " " << author << " " << price; }
};

int main() {
    Book b;
    b.accept();
    b.display();
}
