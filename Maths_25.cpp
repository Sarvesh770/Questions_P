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
    cin >> tc;
    vector<ll>v(tc);
    for (ll t = 0; t < tc; t++) {
        // cout << "Case #" << t << ": ";
        cin>>v[t];
    }
    for(ll i=0; i<tc; i++){
        if(v[i] <= 14){
            cout<<"NO"<<endl;
        }else if(v[i]%14 <= 6 && v[i]%14 > 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

