#include<iostream>
using namespace std;

int main(){
    int a,b,opp;
    double res;
    cout << "Enter First number :";
    cin >> a;

    cout << "Enter second Number :";
    cin >> b;
    
    cout << "Select a Operation " << endl;
    cout<<"1. Add " << endl << "2. Subtract " << endl << "3. Multiply" << endl << "4. Divide" << endl;
    cin>>opp;
    switch(opp){
        case 1:
            res=a+b;
            cout<<res;
            break;
        case 2: 
            res=a-b;
            cout<<res;
            break;
        case 3:
            res=a*b;
            cout<<res;
            break;
        case 4:
            res=(double)a/b;
            cout<<res;
            break;
        default :
            cout<<"Invalid Input !! ";
    }
    return 0;
}