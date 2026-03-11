#ifndef DISH_H
#define DISH_H
#include <string>
using namespace std;
class Dish {
private:
    string name;
    double price;
    double weight;
    static int count;
public:
    Dish();
    Dish(string name);
    Dish(string name, double price);
    Dish(string name, double price, double weight);
    Dish (const Dish& other);
    Dish (Dish&& other);
    ~Dish();
    void setprice(double price);
    void printInfo()const;
    static int getcount();
    void operator++();
    friend ostream& operator<< (ostream& out, const Dish &d);
    friend istream& operator>> (istream& in, const Dish &d);

};

#endif

