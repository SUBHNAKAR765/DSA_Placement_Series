// Take a number from user and find the sum of all the even numbers between them 

#include<iostream>
using namespace std;
int main ()
{
    int i=1;
    int n;
    int sum=0;
    cout<<"Enter the value of n:";
    cin>>n;

    while(sum<=n){
        if(i % 2 == 0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"The value of sum:"<<sum<<endl;
   

    }

