#include <iostream>

using namespace std;

bool isPrime(int n, int helper = 2) {
    if (n <= 1) return false;
    if (helper * helper > n) return true;
    if (n % helper == 0) return false;
    return isPrime(n, helper + 1);
}

int main() {

    cout << boolalpha;
    cout << isPrime(20);

    return 0;
}
