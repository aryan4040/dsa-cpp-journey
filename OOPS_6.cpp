#include<iostream>
#include<string>
using namespace std;

class Car {
    string name;
    string color;

public:

    // Constructor
    Car(string nameValue, string colorValue) {
        name = nameValue;
        color = colorValue;

        cout << name << " has been created." << endl;
    }

    // Destructor
    ~Car() {
        cout << name << " has been destroyed." << endl;
    }
};

int main() {

    Car c1("BMW", "Blue");
    Car c2("Audi", "Black");

    cout << "Both cars are currently in the program." << endl;

    return 0;
}