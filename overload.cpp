#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}

int add( int a, int b, int c){
    return a + b + c;
}

int main()
{
    int a,b,c;
    double x,y;

    cout<<"Enter two integer : ";
    cin>>a>>b;
    cout<< "Sum : "<< add(a,b)<<endl;

    cout<<"Enter two decimal number : ";
    cin>>x>>y;
    cout<< "Sum : "<< add(x,y)<<endl;

    cout<<"Enter three integer number : ";
    cin>>a>>b>>c;
    cout<< "Sum : "<< add(a,b,c)<<endl;

    return 0;
}