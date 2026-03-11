#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;

class Customer {
private:
    string name;
    int tablenumber;
    int telnumber;
public:
    Customer();
    Customer(string name, int tablenumber=1, int telnumber=0);
    Customer(const Customer& other);
    Customer(Customer&& other);
    ~Customer();
    void settablenum(int tablenumber);
    void printInfo();

};

#endif
