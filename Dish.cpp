#include <iostream>
#include "Dish.h"
using namespace std;
Dish::Dish(): Dish("Unknown",0.0,0.0){}
Dish::Dish(string name, double price, double weight):name(name),price(price),weight(weight) {}
Dish::Dish(string name, double price):name(name),price(price),weight(0.0){}
Dish::~Dish() {
    cout << "Dish object destroyed: " << name  << endl;
}
void Dish::printInfo(){
    cout << "Dish: " << name << endl;
    cout << "Price= " << price << endl;
    cout << "Weight= " << weight << endl;
}
