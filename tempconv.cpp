#include<iostream>
using namespace std;

int main(){
    double temp;
    char unit;
    double res;
    cout<<"Enter the Temprature : ";
    cin >>temp;

    cout<<" Select The Unit "<<endl;
    cout<<" F = Fahrenheit "<<endl;
    cout<<" C = Celsius "<<endl;
    cout<<"Enter F or C : ";
    cin>>unit;

    if(unit=='F' || unit == 'f')
    {
        cout<<" Converting Celcius to Fahrenheit"<<endl;
        res=(1.8*temp)+32;
        cout<<res;
    }
    else if(unit=='C' || unit == 'c')
    {
        cout<<" Converting Fahrenheit to Celcius"<<endl;
        res = (temp - 32) / 1.8;
        cout<<res;
    }
    else{
        cout<<"Invalid Input ";
    }
    return 0;
}
