#include <iostream>
using namespace std;

int main () {

    //pointers = a variable storing memoery address of other variable

    // & address-of operator
    // * dereference operator

    string name = "victoria";
    int age = 22;
    string freePizzas[3] = {"pizza1", "pizza2" , "pizza3"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << *pName << '\n'; //access value from the pointer dereference name
    cout << *pAge << '\n';
    cout << *pfreePizzas << endl;

    return 0;
}