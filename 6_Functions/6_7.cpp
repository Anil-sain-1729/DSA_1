#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Square = " << square(number) << endl;
    return 0;
}
