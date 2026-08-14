#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter your Grade : ";
    cin >> grade;

    switch(grade){
        case 'A' :
            cout << "You did Great";
            break;
        case 'B' :
            cout << "You did Good";
            break;
        case 'C' :
            cout << "You did Okay";
            break;
        case 'D' :
            cout << "You did not do Good";
            break;
        case 'F' :
            cout << "YOU FAILED !! ";
            break;
        default :
            cout << "Invalid Grade";
    }
    return 0;
}