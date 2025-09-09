// O(tc * n)

#include <bits/stdc++.h>
using namespace std;

void div (string s, int m) {
    int ans = 0;

    for (int i = 0; i<s.size(); i++) {
        ans = ans * 10 + (s[i] - '0');
        ans = ans % m;
    }

    if (ans % m == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

int main () {
    int tc;
    cin >> tc;

    while (tc--) {
        string s;
        int m;
        cin >> s >> m;
        div(s, m);
    }

    return 0;
}
