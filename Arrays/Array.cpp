#include <iostream>
using namespace std;

int main(){
    //declare
    int number[15];

    // accessing an array
    cout << "Value at 0 index is: " << number[0] << endl;

    // initializing an array
    int second[3] = {5, 7, 11};

    cout << "Value at 2 index is: " << second[2] << endl;

    int third[15] = {2, 7};
    int n = 15;

    cout << "printing the array: " << endl;
    for (int i = 0; i < n; i++){
        cout << third[i] << " ";
    }
    cout << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;

    cout << "Everything is fine" << endl;

    return 0;
}