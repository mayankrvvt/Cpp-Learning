#include<iostream>
using namespace std;

int main (){
    int age ;
    cout<< "Enter Your age : ";
    cin>> age;

    if (age >= 18){
        cout<<"Allowed to vote ";
    }
    else{
        cout<< "Not allowed to vote";
    }
    return 0;
}