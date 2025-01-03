#include<iostream>
using namespace std;

//  1-->even
//  0-->odd

 bool isEven(int a){
if (a&1){             // and 1 of any number is true -- odd number 
        return 0;
    }
    else{
        return 1 ; 
    }

}



int main (){
    int num;
    cout << "Enter the number :";
    cin >> num ;

    if(isEven(num))
    {
        cout << "Number is even" <<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }

}