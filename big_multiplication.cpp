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

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int fact(int n) {
    if(n==1) {
        return 1;
    }


    return n*fact(n-1);
}

string multiply(string &num1, string &num2) {
    int len1 = num1.size();
    int len2 = num2.size();
 // initializes the result string with a length equal to the maximum possible length of the product and fills it with zeros.
    string result(len1 + len2, '0');

    for (int i = len1 - 1; i >= 0; --i) {
        int carry = 0;
        for (int j = len2 - 1; j >= 0; --j) {
            int product = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }
        result[i] += carry;
    }

    // Remove leading zeros
    result.erase(0, result.find_first_not_of('0'));

    return result;
}

int main() {
    string num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    string result = multiply(num1, num2);
    cout << "Product: " << result << endl;

    return 0;
}

