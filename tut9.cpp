#include<iostream>
using namespace std;
int main() {
    int n;
    int fiz = 0;
    int buz = 0;
    cout<<"Enter N: ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        fiz++; buz++;
        if(fiz == 3 && buz == 5) {
            cout<<"fizbuz"<<endl;
            fiz=0;
            buz=0;
        } else if(fiz==3) {
            cout<<"fiz"<<endl;
            fiz=0;
        } else if(buz==5) {
            cout<<"buz"<<endl;
            buz=0;
        } else {
            cout<<i<<endl;
        }
    }
    return 0;
}





































//     int n;
//     cout<<"Enter N: ";
//     cin>>n;
//     for(int i=1; i<=n; i++) {
//         if ((i%3 == 0) && (i%5 == 0)) {
//             cout<<" Fizz Buzz"<<endl;
//         }
//         else if(i%3 == 0) {
//             cout<<"Fizz"<<endl;
//         } else if(i%5 == 0) {
//             cout<<"Buzz";
//         } else {
//             cout << i << endl;
//         }
//     }
//     return 0;
// }