#include "Customer.h"
#include <iostream>
Customer::Customer()
        : Customer("Guest", 1, 0) {}

Customer::Customer(string name, int tablenumber, int telnumber)
        :name(name), tablenumber(tablenumber), telnumber(telnumber) {}

Customer::Customer(const Customer& other){
        name=other.name;
        tablenumber=other.tablenumber;
        telnumber=other.telnumber;}

Customer::Customer(Customer&& other) {
    name=move(other.name);
    tablenumber=other.tablenumber;
    telnumber=other.telnumber;
}

Customer::~Customer() {}
void Customer::settablenum(int tablenumber) {
    this->tablenumber=tablenumber;
}

void Customer::printInfo()const{
    cout << "Name: " << name << " | Table namber: " << tablenumber << " | Telephone number: " << telnumber << endl;
}

