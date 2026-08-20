#include<iostream>
using namespace std;

int main(){

    int n; 
    cout << "Enter size of an array : ";
    cin >> n;

    int arr[n];
    cout << "Enter "<< n << " Number of elements " << endl;
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    cout << "Array Stored is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}