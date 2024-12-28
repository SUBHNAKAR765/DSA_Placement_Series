#include<iostream>
using namespace std;
int main ()
{
    int a = 10;
    cout<< !a <<endl;

    int b= 5 ;
    int c=6;
    bool bl = (b>0 && c<7);
    cout << bl <<endl ;

    bool b2 = (b<0 || c<7);
    cout << b2 <<endl ;
}
