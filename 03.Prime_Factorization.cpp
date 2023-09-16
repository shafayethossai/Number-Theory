// O[sqrt(n)logn]

#include <bits/stdc++.h>
using namespace std;

#define    ll long long
#define    ull unsigned long long int

#define    pb push_back
#define    pf push_front
#define    pp pop_back()
#define    ppf pop_front
#define    mp make_pair
#define    ff first
#define    ss second
#define    revers(v) reverse(v.begin(),v.end())
#define    setp(n) fixed << setprecision(n)
#define    for0(n) for (int i = 0; i < n; i++)
#define    for1(n) for (int i = 1; i <= n; i++)
#define    for11(n) for (int i = 1; i<n; i++)
#define    loop(a, b) for (int i = a; i < b; i++)
#define    bloop(a, b) for (int i = a; i >= b; i--)

#define    yes cout<<"YES"<<endl
#define    no cout<<"NO"<<endl
#define    fr cout<<"First"<<endl
#define    sc cout<<"Second"<<endl
#define    mem(x,y) memset(x,y,sizeof(x))

#define    ERR 1e-9
#define    pi (2*acos(0))
#define    PI 3.141592653589793
#define    MOD 1000000007
#define    infinity 1e10
#define    inf  0x3f3f3f3f


#define    ugly 859963392
#define    lbs(x,num)    lower_bound(x.begin(),x.end(),num)
#define    ubs(x,num)    upper_bound(x.begin(),x.end(),num)
#define    Test_Case    int t;cin>>t;while(t--)
#define    fastread()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));

//***************************************************************************************************************************//
//**********************************************************SHAFAYET DEFINED*********************************************************//

void primefact (int n) {
    bool first = true;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int cnt = 0;

            while (n % i == 0) {
                cnt++;
                n = n / i;
            }cout << i << "^" << cnt << ",";
        }
    }

    if (n > 1) {
        cout << n << "^" << 1 << endl;
    }
    else {
        cout << endl;
    }
}

int main () {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        primefact(n);
    }
    return 0;
}
