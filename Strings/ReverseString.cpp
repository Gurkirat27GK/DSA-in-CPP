#include <iostream>
using namespace std;

int getLength(char ch[]){
    int count = 0;
    
    for (int i = 0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char ch[], int n){
    int start = 0;
    int end = n - 1;

    while (start < end){
        swap(ch[start++], ch[end--]);
    }
}

int main(){
    char ch[20];

    cout << "Enter string: ";
    cin >> ch;
    int len = getLength(ch);

    reverse(ch, len);
    
    cout << "Reversed string is: ";
    cout << ch << endl;

    return 0;
}