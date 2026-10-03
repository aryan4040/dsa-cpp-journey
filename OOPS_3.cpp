#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:
    Car(string nameValue , string colorValue) {
        cout<<"Constructor has been called....object is created \n";
        name = nameValue;
        color = colorValue;
    }

    //getter:
    string getName() {
        return name;
    }
    string getColor() {
        return color;
    }

    void start() {
        cout<<"Car has started \n";
    }
    void stop() {
        cout<<"Car has stopped \n";
    }
};

int main() {
    Car c1("BMW" , "Blue");
    cout<<c1.getName()<<endl;
    cout<<c1.getColor()<<endl;

    return 0;
}