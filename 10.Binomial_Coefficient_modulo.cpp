/*
law of Binomial Coefficient :
------------------------------
let, n1 = n!
     r1 = r!
     k = (n - r)!

n               n!
 c    = -------------------
  r         r! * (n - r)!

                n1
      = -----------------------
              r1 * k

      = (n1 * r1 ^-1 * k ^-1) % mod
      = ((n1 % mod) * ((r1 ^ mod-2) % mod) * ((k ^ mod-2)mod)) % mod
*/


#include <bits/stdc++.h>
using namespace std;

#define    ll    long long
#define    mod   1000000007

ll fact (ll n) {
    ll ans = 1;

    for (int i = 2; i <= n; i++) {
        ans = (ans * i) % mod;
    }
    return ans % mod;
}

ll power (ll base, ll p) {
    ll ans = 1;

    while (p) {
        if (p % 2 == 1) {
            ans = (ans * base) % mod;
            p--;
        }
        else {
            base = (base * base) % mod;
            p = p/2;
        }
    }
    return ans % mod;
}

ll ncr (ll n1, ll r1, ll k) {
    ll ans = n1, ans1, ans2;

    ans1 = power(r1, mod-2);
    ans2 = power(k, mod-2);
    ans = (ans * ans1) % mod;
    ans = (ans * ans2) % mod;

    return ans % mod;
}

int main () {
    ll n, r, n1, r1, k, ans;
    cin >> n >> r;

    n1 = fact(n);
    r1 = fact(r);
    k = fact(n-r);

    ans = ncr (n1, r1, k);
    cout << ans << endl;

    return 0;
}
