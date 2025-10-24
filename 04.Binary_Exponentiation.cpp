// O[logn]

#include <bits/stdc++.h>
using namespace std;

#define    ll long long

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
ll power_manually(ll base,ll n,ll mod){
	ll result=1;
	while(n){
		if(n%2==1){
			result = (result*base)%mod;
			n--;
		}
		else {
			base=(base*base)%mod;
			n/=2;
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
        cout<<power_recursion(n, m) << endl;
        cout<<power_manually(n, m, 1e9)<<endl;
    }
    return 0;
}
