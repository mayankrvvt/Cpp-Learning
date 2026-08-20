#include<iostream>
using namespace std;

double getTotal( double price[], int size){

    double total = 0;
    for(int i = 0; i < size; i++){
        total= total + price[i];
    }
    return total;
}

int main(){
    
    double price[] = {89.90, 72.80, 45, 99.99, 58.90};
    int size = sizeof(price)/sizeof(double);

    double total = getTotal(price, size);

    cout << "$ " << total << endl;

    return 0;
}