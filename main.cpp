#include <iostream>
#include "Dish.h"
#include "Order.h"
#include "Customer.h"
#include <utility>
using namespace std;
int main(){
    cout << "===Customer1===" << endl;
    Customer c1;
    c1.printInfo();

    cout << "-Dish-" << endl;
    Dish d1;
    d1.printInfo();

    cout << "-Order-" << endl;
    Order o1;
    o1.printInfo();
    cout << "-----------------------------" << endl;


    cout << "===Customer2===" << endl;
    Customer c2("Арінка");
    c2.printInfo();

    cout << "-Dish-" << endl;
    Dish d2 ("Вареники");
    d2.printInfo();

    cout << "-Order-" << endl;
    Order o2(34);
    o2.printInfo();
    cout << "-----------------------------" << endl;


    cout << "===Customer3===" << endl;
    Customer c3("Соня", 5);
    c3.printInfo();

    cout << "-Dish-" << endl;
    Dish d3 ("Олівє", 67);
    d3.printInfo();

    cout << "-Order-" << endl;
    Order o3(34,6789);
    o3.printInfo();
    cout << "-----------------------------" << endl;


    cout << "===Customer4===" << endl;
    Customer c4("Ання",9,423);
    c4.printInfo();

    cout << "-Dish-" << endl;
    Dish d4("Борщ",85.50,300);
    d4.printInfo();

    cout << "-Order-" << endl;
    Order o4(23,405);
    o4.printInfo();
    cout << "-----------------------------" << endl;

    cout << "===Customer5===" << endl;
    Customer c5;
    c5.printInfo();

    Dish d5=d4; // copy constructor
    cout << "copy construct:" << endl;
    d5.printInfo();
    Dish d6=std::move(d3);
    cout << "move const" << endl;
    d6.printInfo();
    ++d2;
    cout << "After ++ operator:" << endl;
    d2.printInfo();


    Order o5=o2+o4;
    cout << "Binary operator + " << endl;
    o5.printInfo();
    cout << "Dish count: " << Dish::getcount() << endl;

    const Dish d7("Салат",50,200);
    cout << "Const object:" << endl;
    d7.printInfo();


    return 0;
}