#include <iostream>
using namespace std ;

int  simpleIntrest(int p , int r, int t){
    int numerator  = p * r * t;
    int denominator = 100 ;
    int  si = numerator / denominator ;
    return si ; 
}

int main (){
    int p ;
    cout << "Enter the value of  p : ";
    cin >> p;

    int r;
    cout << "Enter the value of r :";
    cin >> r;

    int t;
    cout << "Enter the value of t : ";
    cin >>t;

    simpleIntrest(p , r , t);
    cout << "Simple intrest is : " << simpleIntrest(p , r , t) << endl ;
}