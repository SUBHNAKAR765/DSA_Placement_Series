// If-else statement
#include<iostream>
using namespace std;
int main  ()
{
    int a,b;
    cout << "Enter the value of a :" ;
    cin>>a;
    cout <<"Enter the value of b :";
    cin>>b;

//using "if-else "
    if (a>b){
        cout << "a is greater"<<endl;
    }
    else{
        cout<< "b is greater"<<endl;

    }

// using only "if"
    if(a>0){
        cout << "a is positive "<< endl;
    }
    if(b>0) {
        cout<<"b is negative "<< endl;
    }
}



