#include <iostream>
#include "Dish.h"
using namespace std;
Dish::Dish() : Dish("Unknown", 0.0, 0.0) {}
Dish::Dish(string name)
    : name(name), price(0.0), weight(0.0) {}
Dish::Dish(string name, double price) {
    name = name;
    price = price;
    weight=0.0;
}
Dish::Dish(string name, double price, double weight)
    : name(name), price(price), weight(weight) {}
Dish::Dish(const Dish& other) {
    name=other.name;
    price=other.price;
    weight=other.weight;
}
Dish::Dish (Dish&& other){
    name=move(other.name);
    price=other.price;
    weight=other.weight;
}
void Dish::setprice(double price) {
    this->price=price;
}
Dish::~Dish() {}
void setprice();
void Dish::printInfo(){
    cout << "Dish: " << name <<  " | Price: " << price << " | Weight: " << weight << endl;
}
