//Milena Nikolova
//F90963

#include <iostream>
using namespace std;

int main(){
int a;
int b;
int c;

cout << "Enter your three integers: " ;

cin >> a >> b >> c;

if (a>b){

    if (a>c) {

cout << "The biggest integer is: " << a << endl;

    } else {
    cout << "The biggest integer is: " << c << endl;

    }
} else {
    if (b>c) {
        cout << "The biggest integer is: " << b << endl;

    } else {

cout << "The biggest integer is: " << c << endl;

    }
}
 return 0;
}
