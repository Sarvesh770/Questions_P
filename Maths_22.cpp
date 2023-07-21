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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll maxi = v[n-1];
        ll sec_maxi = v[n-2];
        ll temp = k+1;
        ll ans = 0;
        if(m%temp){
            ans = ans + maxi*k*(m/temp) + sec_maxi*(m/temp) + maxi*(m%temp);
            cout<<ans;
        }else{
            ans = ans + maxi*k*(m/temp) + sec_maxi*(m/temp);
            cout<<ans;
        }
    }
}

