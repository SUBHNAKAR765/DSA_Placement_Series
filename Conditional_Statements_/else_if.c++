// Take a number from user & check whether the number is positive, negative or 0

#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout << "Enter the value of a:";
    cin>>a;

// using "else-if"
    if (a>0){
        cout<< "a is positive ";
    }
    else if(a<0)
    {
        cout<<"a is negative ";
    }
    else{
        cout<<"a is zero";
    }
}