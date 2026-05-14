#include <iostream>
using namespace std;

// Base Class
class Account {
public:
    string name;
    int balance;

    void getData() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Balance: ";
        cin >> balance;
    }
};

// Derived Class
class Bank : public Account {
public:
    void display() {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    Bank b1;

    b1.getData();
    b1.display();

    return 0;
}