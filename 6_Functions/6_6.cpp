#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << findMax(15, 25) << endl;
    cout << findMax(50, 30) << endl;
    return 0;
}
