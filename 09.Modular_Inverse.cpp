// O(tc * n)

/*
Fermet's Little Theorem :
--------------------------
(x ^ m-1) = 1 (mod m)
(x ^ m-2) = x ^ -1
* (b ^ -1) % m = (b ^ (m-2)) % m

-> (a / b) % m = (a * (1/b)) % m
               = (a * b ^-1) % m
               = (a * (b ^ m-2)) % m

-> (6 / 2) % 5 = (6 * (2 ^5-2)) % 5
               = (6 * 2 ^3) % 5
               = (6 * 8) % 5
               = ((6 % 5) * (8 % 5)) % 5
               = (1 * 3) % 5
               = 3 % 5 = 3 */

#include <bits/stdc++.h>
using namespace std;

int power (int base, int p, int m) {
    int res = 1;

    while (p) {
        if (p % 2 == 1) {
            res = (res * base) % m;
            p--;
        }
        else {
            base = (base * base) % m;
            p = p / 2;
        }
    }
    return res % m;
}

int main () {
    int a, b, m;
    cin >> a >> b >> m;

    int x = power (b, m-2, m);
    int ans = (a * x) % m;
    cout << ans << endl;

    return 0;
}
