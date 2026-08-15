#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter Your Name : ";
    getline(cin,name);
    if(name.length()>12){
        cout<<" Space Exceeded ";
    }
    else{
        cout<<"Welcome "<<name<<endl;
    }
    return 0;
}