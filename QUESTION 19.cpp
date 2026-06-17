#include <iostream>
using namespace std;

int main() {
    long long binary;
    cin >> binary;

    int decimal = 0, base = 1, rem;
    long long temp = binary;

    while (temp > 0) {
        rem = temp % 10;
        decimal += rem * base;
        temp /= 10;
        base *= 2;
    }

    cout << "Decimal: " << decimal << endl;
    cout << "Hexadecimal: " << hex << decimal << endl;
    cout << "Octal: " << oct << decimal << endl;

    return 0;
}
