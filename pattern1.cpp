#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // Outer loop is responsible for the COLUMNS
    // Inner loop is responsible for the ROWS
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
        cout<<"🐱"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
