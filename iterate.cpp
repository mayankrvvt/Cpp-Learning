#include<iostream>
using namespace std;

int main(){

    string students[] = {"Mayank", "Yumi", "Enzo"};

    for(int i = 0; i<sizeof(students)/sizeof(string); i++){ //used size of for length of an array
        cout << students[i] << endl;
    }
    return 0;
}