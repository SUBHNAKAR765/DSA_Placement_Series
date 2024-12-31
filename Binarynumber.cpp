// Binary form of a given number 
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";  
    cin >> n;


    float ans = 0;
    int i = 0;

    while (n != 0) {
        int bit = n & 1;  
        ans = (bit * pow(10, i)) + ans;  // Add the bit at the 10^i place
        n = n >> 1;  // Right shift n to get  next bit
        i++;  // Increment place
    }

    cout << "Answer is " << ans << endl;

    // BINARY TO DECIMAL
    
    int i=0;
    float ans = 0;
    while(n != 0){

        float digit = n % 10; 
        if(digit==1){
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }
    cout<< ans << endl;
}