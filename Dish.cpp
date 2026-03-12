#include <iostream>
#include <utility>
#include "Dish.h"
using namespace std;

int Dish::count = 0;
Dish::Dish() : Dish("Unknown", 0.0, 0.0) {}
Dish::Dish(string name)
    : name(name), price(0.0), weight(0.0) {
    count++;
}

Dish::Dish(string name, double price) {
    this->name = name;
    this->price = price;
    weight=0.0;
    count++;
}

Dish::Dish(string name, double price, double weight)
    : name(name), price(price), weight(weight) {count++;}

Dish::Dish(const Dish& other) {
    name=other.name;
    price=other.price;
    weight=other.weight;
    count++;
}

Dish::Dish (Dish&& other){
    name=std::move(other.name);
    price=other.price;
    weight=other.weight;
    count++;
}

Dish::~Dish(){}

void Dish::setprice(double price) {
    this->price = price;
}


int Dish::getcount(){
    return count;
}



void Dish::printInfo()const{
    cout << "Dish: " << name <<  " | Price: " << price << " | Weight: " << weight << endl;
}
void Dish::operator++(){
    price++;
}
ostream& operator<<(ostream& out, const Dish &d){
    out << "Dish=" << d.name << "Price=" << d.price << "Weight=" << d.weight << endl;
    return out;
}
/*istream& operator>>(istream& in, Dish& d){
    cout << "Enter name: ";
    in >> d.name;
    return in;}*/
