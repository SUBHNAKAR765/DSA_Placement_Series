/*
A B C 
D E F
G H I
*/

#include<iostream>
using namespace std ;
int main ()
{
    int n;
     cout << "Enter the value of n :";
     cin>>n;

      int i=1;
    char count = 'A';
    while (i<=n){
        int j=1;      // i= row & j= column 
        while(j<=n){
            cout<< count<<" " ;
            count = count +1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
     
}