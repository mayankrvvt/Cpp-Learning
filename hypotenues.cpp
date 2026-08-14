#include<iostream>
#include<cmath>
using namespace std;

int main () {
    double a, b, c;
    cout << "Enter Length of side a: ";
    cin >> a;
    cout << "Enter Length of side b: ";
    cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Length of side c: " << c << endl;
    return 0;

}