/*
Explain :
---------
n = 60
Divisor's of (60) = 2, 2, 3, 5
n = 2 ^2 * 3 ^1 * 5 ^1
n = n * (1 - 1/2) * (1 - 1/3) * (1 - 1/5)
  = n * (2 - 1 / 2) * (3 -1 / 3) * (5 - 1 / 5) = answer
*/

#include <bits/stdc++.h>
using namespace std;

void phi(int n) {
    int ans = n;

    for (int i = 2; i<= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n = n/i;
            }
            ans = ans * (i - 1);
            ans = ans / i;
        }
    }
    if (n > 1) {
        ans = ans * (n - 1);
        ans = ans / n;
    }
    cout << ans << endl;
}

int main () {
    int n;
    cin >> n;
    phi(n);

    return 0;
}

