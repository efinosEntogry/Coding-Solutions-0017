#include <iostream>

using namespace std;

bool isPrime(int n, int helper = 2) {
    if (n <= 1) return false;
    if (n % helper == 0 && n != 2) return false;
    if (helper >= floor(sqrt(n))) return true;
    return isPrime(n, helper+1);
}

int main() {

    cout << boolalpha;
    cout << isPrime(17);

    return 0;
}
