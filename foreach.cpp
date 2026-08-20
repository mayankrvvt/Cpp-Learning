#include<iostream>
using namespace std;

int main(){

    //Using for each loop  in Cpp
    //foreach loop = ease the traversal over an iterable data set

    int grades[] = {87, 34, 79, 53};

    for( int grade : grades){
        cout << grade << endl;
    }

    return 0;
}