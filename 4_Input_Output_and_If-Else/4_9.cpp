#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        if (number % 2 == 0) {
            cout << "Positive Even Number" << endl;
        } else {
            cout << "Positive Odd Number" << endl;
        }
    } else if (number < 0) {
        cout << "Negative Number" << endl;
    } else {
        cout << "Number is Zero" << endl;
    }

    return 0;
}
