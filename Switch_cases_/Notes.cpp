#include <iostream>
using namespace std;

int main() {
    int amount, remAmount;
    int hundred = 0, fifty = 0, twenty = 0, one = 0;

    cout << "Enter the total amount: ";
    cin >> amount;

    remAmount = amount; // Store the original amount

    switch (1) { // Using switch with a constant value
        case 1:
            hundred = remAmount / 100; // Calculate number of 100 rupee notes
            remAmount %= 100;          // Remaining amount
        case 2:
            fifty = remAmount / 50;    // Calculate number of 50 rupee notes
            remAmount %= 50;           // Remaining amount
        case 3:
            twenty = remAmount / 20;   // Calculate number of 20 rupee notes
            remAmount %= 20;           // Remaining amount
        case 4:
            one = remAmount;           // Remaining amount is in 1 rupee notes
            break;
        default:
            cout << "Invalid amount" << endl;
    }

    cout << "100 rupee notes: " << hundred << endl;
    cout << "50 rupee notes: " << fifty << endl;
    cout << "20 rupee notes: " << twenty << endl;
    cout << "1 rupee notes: " << one << endl;

    return 0;
}
