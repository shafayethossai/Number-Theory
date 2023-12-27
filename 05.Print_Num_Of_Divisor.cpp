//  O[sqrt(n)]

#include <bits/stdc++.h>
using namespace std;

#define    ll  long long

set <ll> st;

void count_divisor (ll n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ll x = i;
            ll y = n / i;

            st.insert(x);
            st.insert(y);
        }
    }
}

int main () {
    int tc;
    cin >> tc;

    while (tc--) {
        ll n;
        cin >> n;
        count_divisor(n);
        cout << st.size() << endl;

        for (auto it : st) {
            cout << it << " ";
        }
        cout << endl;
        st.clear();
    }

    return 0;
}

// Optimal Solution given below,
int main () {
    int tc;
    cin >> tc;

    ll arr[1000005] = {};

    for (int i=1; i<1000005; i++) {
        for (int j=i; j<1000005; j+=i) {
            arr[j]++;
        }
    }

    while (tc--) {
        int x;
        cin >> x;

        cout << arr[x] << endl;
    }

    return 0;
}
