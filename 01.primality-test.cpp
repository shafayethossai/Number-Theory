#include <bits/stdc++.h>
using namespace std;

bool prime (int n) {
    if (n < 2) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i < sqrt(n); i++) {
        if (n % 1 == 0) return false;
    }
    return true;
}

int main () {
    int n;

    while (cin >> n) {
        if (prime(n) == true) {
            cout << "Prime" << endl;
        }
        else {
            cout << "Not Prime" << endl;
        }
    }

    return 0;
}
