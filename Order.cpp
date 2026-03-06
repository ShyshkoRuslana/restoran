#include "Order.h"
#include <iostream>
using namespace std;
Order::Order()
        :Order(0,0.0){}
Order::Order(int ordernumber)
        :Order(ordernumber,0.0){}
Order::Order(int ordernumber, double totalsum)
        :ordernumber(ordernumber),totalsum(totalsum) {}
Order::~Order() {}
void Order::printInfo(){
    cout << "Order number: " << ordernumber << endl;
    cout << "Total sum= " << totalsum << endl;
}
