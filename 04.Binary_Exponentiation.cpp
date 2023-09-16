// O[logn]

#include <bits/stdc++.h>
using namespace std;

// ************************************Binary_Exponentiation_with_recursion**********
long long power_recursion (long long n, long long m) {
    if (m == 1) return n;
    if (m == 0) return 1;

    long long ans = power_recursion(n, m/2);

    if (m % 2 == 1) {
        return ans*ans*n;
    }

    return ans * ans;
}

// ************************************Binary_Exponentiation_Manually*****************
long long power_manually (long long base, long long m) {
    long long result = 1;

    while (base) {
        if (m % 2 == 1) {
            result = result * base;
            m--;
        }
        else {
            base = base * base;
            m = m/2;
        }
    }
    return result;
}

int main () {
    long long tc;
    cin >> tc;

    while (tc--) {
        long long n, m;
        cin >> n >> m;
        cout << power_manually(n, m) << endl;
    }
    return 0;
}
