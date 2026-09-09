#include <iostream>
using namespace std;

class Product {
    int id;
    string name;
    float price;
public:
    void accept() { cin >> id >> name >> price; }
    void display() { cout << id << " " << name << " " << price; }
};

int main() {
    Product p;
    p.accept();
    p.display();
}
