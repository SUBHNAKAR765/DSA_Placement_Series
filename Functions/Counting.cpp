#include<iostream>
using namespace std;

//function signature
void printcounting(int n){
     
     // function body 
    for (int i=1 ; i<=n ; i++ ){
        cout << i << " ";
    }
}

int main (){
    int n;
    cout << "Enter the number : " ;
    cin >> n ;

    //function call 
    printcounting(n);
}