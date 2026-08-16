#include<iostream>
using namespace std;

void happybirthday(){
    cout<<"Happy Birthday To You"<<endl;
}

int main(){
    int n;
    cout<<"Happy Birthday "<<endl;

    cout<<"Press 1 to wish Happy Birthday"<<endl;
    cout<<"Press 0 to exit the code"<<endl;
    cin>>n;

    if (n==1){
        happybirthday();
    }
    else{
        cout<<"Code Exited"<<endl;
    }
    return 0;
}