#include<iostream>
using namespace std;
int main (){
    int a=24;
    if(a>20){
        cout<<"Love";
    }
    else if (a==24){
        cout<<"Lovely";
    }
    else{
        cout<<"Great";
    }
    cout<<a<<endl;

//next question 
    int b=2;
    int c=b+1;
    if((b=3)==c){
        cout<<b;
    }
    else{
        cout<<b+1;
    }
}