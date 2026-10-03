//Copy Constructor:

#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    string name;
    string color;
    Car(string name , string color) {
        this -> name = name;
        (*this).color = color;
    }
};

int main() {
    Car c1("BMW" , "Blue");
    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    return 0;
}
