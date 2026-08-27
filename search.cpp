#include <iostream>
using namespace std;

void search(int arr[],int n){

    int key;
    cout<< "Enter the number you want to find : ";
    cin>> key;

    for(int i=0; i<n; i++){
        if(key==arr[i]){
            cout<<"Found at "<< i + 1 << endl;
            return;
        }
    }
    cout<< "Not Found";
}
int main(){

    int n;
    cout<< "Enter the size of array : ";
    cin>> n;

    int arr[n];

    cout<<"Enter the elements in Array : "<< endl;
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    search(arr, n);

    return 0;
}