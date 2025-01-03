#include <iostream>
using namespace std ;

// 1-->Prime
// 0-->not a prime no

bool isPrime (int a){

    for (int i=2 ; i<a ; i++){ 
    //not a prime number 
        if(a%i ==0){
            return 0 ;
        }
    }
    return 1 ;

}

int main  (){

    int a ; 
    cout << "Enter the number: ";
    cin>>a;

    if (isPrime(a)) {
        cout << "Is a prime number ";
    }
    else {
        cout << "Not a prime number";
    }
}