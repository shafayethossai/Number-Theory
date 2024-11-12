// time complexity : O[nlog(logn)]

#include <bits/stdc++.h>
using namespace std;

// Using Bitset

// const int N = 1e8;
// bitset<N> is_prime;
// vector<int> v;

// void sieve() {
//     is_prime[0] = is_prime[1] = true;

//     for (int i = 2; i * i < N; i++) {
//         if (!is_prime[i]) {
//             for (int j = i * i; j < N; j += i) {
//                 is_prime[j] = true;
//             }
//         }
//     }

//     for (int i = 2; i < N; i++) {
//         if (!is_prime[i]) {
//             v.push_back(i);
//         }
//     }
// }

void sieve (int n) {
    int prime[n+3];
    memset(prime, 0, sizeof(prime));

    for (int i=2; i <= sqrt(n); i++) {
        if (prime[i] == 0) {
            for (int j = i*i; j <= n; j += i) {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <=n; i++) {
        if (prime[i] == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main () {
    while (1) {
        int n;
        cin >> n;
        sieve(n);
    }

    return 0;
}
