/*

1234554321
1234**4321
123****321
12******21
1********1

*/
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    int i = 1;

    while (i <= n) {
        int j = 1;

        // Print numbers in increasing order
        while (j <= n - i + 1) {
            cout << j;
            j++;
        }

        // Print asterisks
        int k = 1;
        while (k <= 2 * (i - 1)) {
            cout << "*";
            k++;
        }

        // Print numbers in decreasing order
        j = n - i + 1;
        while (j >= 1) {
            cout << j;
            j--;
        }

        cout << endl;
        i++;
    }


}

