/*
Given a character ch,
->if it lies between "a-z"
    print this is lowercase 
-> if it lies between "A-Z"
    print this is uppercase
->if it lies between "0-g"
    print this is numeric
*/

#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<< "Enter the Character:";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Character is lowercase";
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Character is Uppercase";
    } 
    else if (ch >= '0' && ch <= '9') {
        cout << "Character is numeric";
    } 
    else {
        cout << "Character is special or unrecognized";
    }

    return 0;
}
