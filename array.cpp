#include<iostream>
using namespace std;

int main(){

    // array = a data structures that can hold multiple values
    // values are accessed by an index number
    // "kind of like a variable that hold multiple values"

    string car[] = {"Corvette", "Mustang", "Camry"};

    car[0] = "Camero"; // This is how you can change the element in an array
    
    cout << car[0];
    cout << car[1];
    cout << car[2];
    return 0;
}
