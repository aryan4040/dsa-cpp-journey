//Setters and Getters:

#include<iostream>
#include<string>
using namespace std;

class student {
    string name;
    float cgpa;

public:
    //setters:
    void setName(string nameValue){
        name = nameValue;
    }
    void setCgpa(float cgpaValue) {
        cgpa = cgpaValue;
    }

    //getters:
    string getname() {
        return name;
    }

    float getCgpa() {
        return cgpa;
    }
};

int main() {
    student s1;
    s1.setName("Aryan");
    s1.setCgpa(9.0);
    cout<<s1.getname()<<endl;
    cout<<s1.getCgpa()<<endl;
    return 0;
}

