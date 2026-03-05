#include <iostream>
#include "Dish.h"
#include "Order.h"
#include "Customer.h"
using namespace std;
int main(){
cout << "----------------------" << endl;
Dish d1 ("Борщ",85.50,300);
Dish d2 ("Вареники",350);
d1.printInfo();
d2.printInfo();

cout << "----------------------" << endl;
Order o1(101,505.70);
Order o2(23,405);
o1.printInfo();
o2.printInfo();

cout << "----------------------" << endl;
Customer c1;
Customer c2("Арінка",9,423);
c1.printInfo();
c2.printInfo();

    return 0;
}