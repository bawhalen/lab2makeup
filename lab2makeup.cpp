#include <iostream>
using namespace std;

void division_by_repeated_subtraction(int a, int b) {
    if (a > 0 && b > 0 && a > b) {
        int quotient = 0;
        while (a >= b) {
            a -= b;
            quotient++;
        }
        int remainder = a;
        cout << quotient << " remainder " << remainder << endl;
    } else {
        cout << "Error: Both a and b should be greater than 0 and a should be greater than b." << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    division_by_repeated_subtraction(a, b);

    return 0;
}
