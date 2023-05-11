#include <iostream>
#include <string>
using namespace std;

bool valid(char ch){
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }

    else{
        return 0;
    }
}

char toLowerCase(char ch){
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return ch;
    }

    else{
        char temp = ch - 'A' + 'a';     // ASCII value game
        return temp;
    }
}

bool checkPalindrome(string a){
    int start = 0;
    int end = a.length() - 1;

    while (start <= end){

        if (a[start] != a[end]){
            return 0;
        }

        else{
            start++;
            end--;
        }
    }
    return 1;
}

bool isPalindrome(string s){

    // Faltu character hta do
    string temp = "";

    for (int i = 0; i < s.length(); i++){
        
        if (valid(s[i])){
            temp.push_back(s[i]);
        }
    }

    // Lowercase me kar do
    for (int j = 0; j < temp.length(); j++){
        temp[j] = toLowerCase(temp[j]);
    }

    // Check palindrome
    return checkPalindrome(temp);
}

int main(){
    string a;

    cout << "Enter string: ";
    cin >> a;

    cout << "Palindrome or not: " << isPalindrome(a);

    return 0;
}