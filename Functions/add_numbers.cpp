#include <iostream>
using namespace std ;

int addNumbers(int a , int b){
     int add = a + b ;
    return add ; 
}

int main (){
 int a ; 
 cout << "Enter the value  of a :";
 cin >>a;

 int b;
cout << "Enter the value of b : ";
 cin >> b  ;

 addNumbers(a,b);
 cout << "answer is :"<< addNumbers(a,b) << endl ;
}