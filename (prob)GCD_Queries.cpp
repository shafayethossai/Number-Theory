#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    if (b == 0) return a;
    else return gcd (b, a%b);
}

int main () {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, q;
        cin >> n >> q;
        int arr[n+3];

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        int pre[n+2];
        int post[n+2];

        pre[0] = 0;

        for (int i = 1; i <= n; i++) {
            pre[i] = gcd(pre[i-1], arr[i]);
        }

        post[0] = 0;

        for (int i = 1; i <= n; i++) {
            post[i] = gcd(post[i+1], arr[i]);
        }

        while (q--) {
            int l, r;
            cin >> l >> r;

            int ans = gcd(pre[l-1], post[r+1]);
            cout << ans << endl;
        }
    }

    return 0;
}
