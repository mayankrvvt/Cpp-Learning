#include<iostream>
using namespace std;

int main (){
    //There are two types of casting in C++:
    //1. implicit Casting
    int a = 10;
    double b = a; // implicit casting from int to double
    //2. explicit Casting
    double c = 10.5;
    int d = (int)c; // explicit casting from double to int
    cout << "Implicit Casting: " << b << endl;
    cout << "Explicit Casting: " << d << endl;

    // character to integer
    char e = 'A';
    int f = (int)e; // explicit casting from char to int
    cout << "Character to Integer: " << f << endl;
    return 0;

}
