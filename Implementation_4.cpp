#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        int n, k, l, c, d, p, nl, np;
        cin>>n>>k>>l>>c>>d>>p>>nl>>np;
        int ans = 0;
        ans = (min((k*l)/nl,min(c*d,p/np)))/n;
        cout<<ans;
    }
}

