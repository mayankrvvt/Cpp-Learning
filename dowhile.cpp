#include<iostream>
using namespace std;

int main(){
    int number;
    // do while loop execute the code written in do
    //until whike condition is satisfied
    do{
        cout<<"Enter a Positive Number :";
        cin>>number;
    }while (number<0);
    cout<<"The number is " <<number;
    return 0;
}