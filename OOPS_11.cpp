//Friend Class:

#include<iostream>
using namespace std;

class Car {
    string name;
    int price;

public:
    Car(string n, int p) {
        name = n;
        price = p;
    }

    friend class Showroom;
};

class Showroom {
public:
    void showCar(Car &c) {
        cout << "Car Name: " << c.name << endl;
        cout << "Car Price: " << c.price << endl;
    }
};

int main() {
    Car c1("BMW", 5000000);

    Showroom s1;

    s1.showCar(c1);

    return 0;
}