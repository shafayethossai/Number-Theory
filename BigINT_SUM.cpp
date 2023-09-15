// BIG INT SUM

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

string BigSum(string x, string y){
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    int len1 = x.size(), len2 = y.size();

    if(len1 > len2){
        int gap = len2 - len1;
        while(gap--){
            y.push_back('0');
        }
    }
    else{
        int gap = len1 - len2;
        while(gap--){
            x.push_back('0');
        }
    }
    int n = x.size();
    string sum = "";
    int carry = 0;

    for(int i = 0; i < n; i++){
        int p = x[i] - '0' + carry;
        int q = y[i] - '0';
        int r = p + q;
        char lastDigit = (r % 10) + '0';
        sum.push_back(lastDigit);
        carry = r / 10;
    }
    if(carry > 0){
        sum.push_back(carry + '0');
    }
    reverse(sum.begin(), sum.end());

    return sum;
}

int main(){
    string x, y;
    cin>> x >> y;

    cout<<BigSum(x, y)<<endl;

    return 0;
}


