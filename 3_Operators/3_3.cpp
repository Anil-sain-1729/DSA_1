#include <iostream>
using namespace std;

int main() {
    int age = 20;
    int marks = 80;

    cout << "Logical AND = "
         << (age >= 18 && marks >= 35) << endl;

    cout << "Logical OR = "
         << (age < 18 || marks >= 35) << endl;

    cout << "Logical NOT = "
         << !(age >= 18) << endl;

    return 0;
}
