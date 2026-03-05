#include "Customer.h"
#include <iostream>
Customer::Customer(string name, int tablenumber, int telnumber): name(name), tablenumber(tablenumber), telnumber(telnumber){}
Customer::Customer(int tablenamber): Customer("Guest", 1, 0) {}
Customer::~Customer() {
    cout << "Customer destroyed:" << name << endl;
}
void Customer::printInfo() {
    cout << "Name: " << name << endl;
    cout << "Table namber: " << tablenumber << endl;
    cout << "Telephone number: " << telnumber << endl;
}

