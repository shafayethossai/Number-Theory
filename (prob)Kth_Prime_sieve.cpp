// An integer stating the number of queries Q(equal to 50000), and Q lines follow, each containing one integer K between 1 and 5000000 inclusive.
// solve with
#include <bits/stdc++.h>
using namespace std;

#define    fastread()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define int long long

vector<bool> vec(90000001, true);
vector<int> ans;

void sieve(){
    for (int i = 2; i <= 90000000; i++){
        if (vec[i] == true){
            ans.push_back(i);
            for (int j = i * i; j <= 90000001; j += i){
                vec[j] = false;
            }
        }
    }
}

int32_t main(){
    fastread();
    int q;
    cin >> q;
    sieve();

    while (q--){
        int n;
        cin >> n;
        cout << ans[n - 1] << endl;
    }

    return 0;
}
