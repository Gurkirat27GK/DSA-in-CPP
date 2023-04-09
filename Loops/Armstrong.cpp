#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter a three-digit integer: ";
    cin >> n;

    int sum = 0; 
    int originalno = n;

    while(n > 0){
        int lastdigit = n % 10; 
        sum = sum + lastdigit * lastdigit * lastdigit;
        n = n / 10;
    }

    if(sum == originalno){
        cout << originalno << " is an Armstrong number";
    }
    else{
        cout << originalno << " is not an Armstrong number";
    }
    
    return 0;
}