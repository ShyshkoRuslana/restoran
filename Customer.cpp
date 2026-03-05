#include "Customer.h"
#include <iostream>
Customer::Customer() : Customer("Guest", 1, 0) {}
Customer::Customer(string name, int tablenumber, int telnumber): name(name), tablenumber(tablenumber), telnumber(telnumber) {}
Customer::Customer(int tablenumber): Customer("Guest", tablenumber, 0) {}
Customer::~Customer() {}
void Customer::printInfo() {
    cout << "Name: " << name << endl;
    cout << "Table namber: " << tablenumber << endl;
    cout << "Telephone number: " << telnumber << endl;
}

