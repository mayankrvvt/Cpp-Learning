#include<iostream>
using namespace std;

int main(){
    int num,res;
    //using ternary operator = replacement to if else condition
    //contion ? expresion 1 : expression2
    cout<<"Enter a Number : ";
    cin>>num;
    res=num%2;
    res==0 ? cout<<"Even Number" : cout<<"Odd Number";

    return 0;

}