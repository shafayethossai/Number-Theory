//  O[sqrt(n)]

#include <bits/stdc++.h>
using namespace std;

#define    ll  long long

set <ll> st;

void count_divisor (ll n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ll x = i;
            ll y = x / i;

            st.insert(x);
            st.insert(y);
        }
    }
}

int main () {
    ll n, k;
    cin >> n >> k;

    count_divisor(n);

    vector <ll> v;
    v.assign(st.begin(), st.end());

    if (k > v.size()) {
        cout << "-1" << endl;
    }
    else {
        cout << v[k - 1] << endl;
    }


    return 0;
}
