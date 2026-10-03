#include<iostream>
#include<string>
using namespace std;

class User{
    int Id;
    string password;
public:
    string Username;
    User(int idValue) {
        Id = idValue;
    }
    void setPassword(string password) {
        this -> password = password;    
    }
    string getPassword() {
        return password;
    }
};

int main() {
    User U1(1);
    U1.Username = "Aryan";
    U1.setPassword("Radha@0404");
    cout<<"Username: "<<U1.Username<<endl;
    cout<<"Password: "<<U1.getPassword()<<endl;
    return 0;
}