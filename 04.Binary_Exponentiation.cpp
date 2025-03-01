// O[logn]

#include <bits/stdc++.h>
using namespace std;

// ************************************Binary_Exponentiation_with_recursion**********
ll power(ll a,ll b, ll mod) {
    if(b == 0) return 1;
    if(b == 1) return a % mod;

    ll temp = power(a, b/2, mod);

    if(b % 2 == 0) {
        return (temp * temp) % mod;
    }
    else {
        return (((temp * temp) % mod) * a) % mod;
    }
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
