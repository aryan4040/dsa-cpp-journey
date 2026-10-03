#include<iostream>
using namespace std;

class Student {
private:
    //Properties:
    string name;
public:
    float cgpa;

    //Methods/Functions:
    void getPercentage() {
        cout<<cgpa*10<<"% \n";
    }
};

int main() {
    Student s1;                      //Object created = s1
    s1.cgpa = 9.0;
    cout<<s1.cgpa<<endl;
    s1.getPercentage();
    cout<<sizeof(s1)<<endl;
    return 0;
}