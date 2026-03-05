#include <iostream>
#include "Dish.h"
#include "Order.h"
#include "Customer.h"
using namespace std;
int main(){
    cout << "===Customer1===" << endl;
    Customer c1("Арінка",9,423);
    c1.printInfo();
    cout << "-Dish-" << endl;
    Dish d1 ("Борщ",85.50,300);
    d1.printInfo();
    cout << "-Order-" << endl;
    Order o1(23,405);
    o1.printInfo();

    cout << "===Customer2===" << endl;
    Customer c2("Соня",6,43);
    c2.printInfo();
    cout << "-Dish-" << endl;
    Dish d2 ("Вареники",300);
    d2.printInfo();
    cout << "-Order-" << endl;
    Order o2(34,67);
    o2.printInfo();

    cout << "===Customer3===" << endl;
    Customer c3(85);
    c3.printInfo();
    cout << "-Dish-" << endl;
    Dish d3 ("Олівє");
    d3.printInfo();
    cout << "-Order-" << endl;
    Order o3;
    o3.printInfo();

    cout << "===Customer4===" << endl;
    Customer c4;
    c4.printInfo();
    cout << "-Dish-" << endl;
    Dish d4;
    d4.printInfo();
    cout << "-Order-" << endl;
    Order o4(332,909);
    o4.printInfo();




    return 0;
}