#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int reverse = 0;
    while (n > 0){
        int lastdigit = n % 10;                  // Ex: Kisi no. ko 10 se divide krne pr remainder last digit ata h
        reverse = reverse * 10 + lastdigit;
        n = n / 10;                                // n ka last digit remove krne ke liye
    }

    cout << reverse << endl;

    return 0;
}