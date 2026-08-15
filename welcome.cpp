#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter Your Name : ";
    getline(cin,name);
    if(name.length()>12){
        cout<<" Space Exceeded ";
    }
    else if(name.empty()){
        cout<<" You didn't enter your name ";
    }
    else{
        cout<<"Welcome "<<name<<endl;
    }
    return 0;
}
