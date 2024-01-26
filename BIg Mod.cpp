
#include <iostream>
using namespace std;

int bigmod(string base, string exponent, int modulus) {
    if (modulus == 1)
        return 0;

    int result = 1;
    int baseNum = 0;
    int expNum = 0;
    for (int i = 0; i < base.length(); i++)
        baseNum = (baseNum * 10 + (base[i] - '0')) % modulus;

    for (int i = 0; i < exponent.length(); i++)
        expNum = (expNum * 10 + (exponent[i] - '0')) % (modulus - 1);

    while (expNum > 0) {
        if (expNum % 2 == 1)
            result = (result * baseNum) % modulus;


        expNum /= 2;
        baseNum = (baseNum * baseNum) % modulus;
    }

    return result;
}

int main() {
    // Example usage:
    string a,b="1";
    long long modulus;
    cin>>a>>modulus;
  //  int modulus = 1000000007;

    cout<< bigmod(a, b, modulus) << endl;

    return 0;
}
