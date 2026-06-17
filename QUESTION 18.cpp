#include <iostream>
using namespace std;

int main() {
    long long binary;
    cin >> binary;

    int decimal = 0, base = 1, rem;

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }

    cout << decimal;

    return 0;
}
