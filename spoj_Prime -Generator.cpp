#include <bits/stdc++.h>
using namespace std;

#define    ll long long
vector <int> v;

void sieve (int n) {
    int prime[n];
    memset(prime, 0, sizeof(prime));

    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) {
            for (int j = i*i; j <= n; j += i) {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 0) v.push_back(i);
    }
}

void init (int l, int r) {
    ll limit = sqrt(r)+1;
    sieve(limit);

    if (l == 1)l++;
    int mx = r - l + 1;
    int arr[mx+1];

    for (int i = 0; i <= mx; i++) {
        arr[i] = 0;
    }

    for (int p : v) {
        if (p*p <= r) {
            int i = (l/p) * p;
            if (i < l) {
                i += p;
            }

            for ( ; i <=r; i += p) {
                if (i != p) {
                    arr[i - l] = 1;
                }
            }
        }
    }

    for (int i = 0; i < mx; i++) {
        if (arr[i] == 0) {
            cout << l + i << endl;
        }
    }
}

int main () {
    int tc, l, r;
    cin >> tc;

    while (tc--) {
        cin >> l >> r;
        init(l, r);
        cout << endl;
    }

    return 0;
}
