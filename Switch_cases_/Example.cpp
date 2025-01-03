#include<iostream>
using namespace std;
int main (){
    int a = 4;

    switch (4) {
        
        case 1: cout<< "This is the first case "<< endl;
                break;
        case 2: cout<< "This is the second case"<<endl;
                 break;
        case 3: cout<< "This is the third case "<<endl;
                break;
        case 4 :cout<< "This is the fourth case "<<endl;
                break;

        default : cout<< "This is the default case "<<endl; //  default statement is not necessary 
    }

    cout<<endl;

    char ch ='A';
    switch(ch){
        case 1: cout<< "This is the first case "<< endl;
                break;
        case 'A': cout<< "This is the second case"<<endl;
                 break;
        case 3: cout<< "This is the third case "<<endl;
                break;
        default : cout<< "This is the default case "<<endl;
    }
    
}
