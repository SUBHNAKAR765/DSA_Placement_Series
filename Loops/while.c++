
// print the sum of numbers from 1 to n
#include<iostream>
using namespace std;
int main ()
{
    int i, sum, n;

    cout << "Enter the value of n :";
    cin>>n;

    i=1;
    sum=0; 
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }   
    cout << "Value of sum :"<<sum<<endl;

}
