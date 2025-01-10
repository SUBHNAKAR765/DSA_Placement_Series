#include<iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n) {
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {

        maxi = max(maxi,num[i] ); // predefined functions for maximum 

        // if (num[i] > max) {
        //     max = num[i];
        // }
    }
    return maxi;
}

int getMin(int num[], int n) {
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {

        mini =min(mini,num[i]); // predefined functions for minimum 

        // if (num[i] < min) { 
        //     min = num[i];
        // }
    }
    return mini;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int num[100];

    // Taking input in array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> num[i];      // array input as element 
    }

    cout << "Maximum value is: " << getMax(num, size) << endl;
    cout << "Minimum value is: " << getMin(num, size) << endl;

    return 0;
}
