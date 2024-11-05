#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e6+9;
int spf[N];

// Precompute the smallest prime factor (spf) for every number up to N
void sieve() {
    for (int i = 2; i <= N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i <= N; i++) {
        if (spf[i] == i) {  // Only prime numbers
            for (int j = i * 2; j <= N; j += i) {
                spf[j] = min(spf[j], i);
            }
        }
    }
}

// Function to get the least prime factor (lpf) of a number
int LPF(int x) {
    return spf[x];
}

// Function to get the greatest prime factor (gpf) of a number
int GPF(int x) {
    int ans = 0;
    while (x > 1) {
        int p = spf[x];
        ans = max(ans, p);
        while (x % p == 0) {
            x /= p;
        }
    }
    return ans;
}

// Function to get the number of distinct prime factors
int distinctPrimeFactors(int x) {
    int distinct_count = 0;
    while (x > 1) {
        int p = spf[x];
        distinct_count++;
        while (x % p == 0) {
            x /= p;
        }
    }
    return distinct_count;
}

// Function to get the total number of prime factors (including their powers)
int totalPrimeFactors(int x) {
    int total_count = 0;
    while (x > 1) {
        int p = spf[x];
        while (x % p == 0) {
            total_count++;
            x /= p;
        }
    }
    return total_count;
}

// Function to calculate the number of divisors of x
int numberOfDivisors(int x) {
    int num_divisors = 1;
    while (x > 1) {
        int p = spf[x];
        int power_of_p = 0;
        while (x % p == 0) {
            power_of_p++;
            x /= p;
        }
        num_divisors *= (power_of_p + 1);
    }
    return num_divisors;
}

// Function to calculate the sum of divisors of x
ll sumOfDivisors(int x) {
    ll sum_divisors = 1;
    while (x > 1) {
        int p = spf[x];
        int prime_power = 1;
        while (x % p == 0) {
            prime_power *= p;
            x /= p;
        }
        sum_divisors *= (1LL * (prime_power * p - 1) / (p - 1));
    }
    return sum_divisors;
}

int main() {
    sieve();

    int n;
    cin >> n;

    while (n--) {
        int q;
        cin >> q;

        int lpf = LPF(q);
        int gpf = GPF(q);
        int dist_prime_fact = distinctPrimeFactors(q);
        int total_prime_fact = totalPrimeFactors(q);
        int NOD = numberOfDivisors(q);
        ll SOD = sumOfDivisors(q);

        cout << lpf << " " << gpf << " " << dist_prime_fact << " "
             << total_prime_fact << " " << NOD << " " << SOD << endl;
    }

    return 0;
}
