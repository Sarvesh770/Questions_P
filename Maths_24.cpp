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
        ll x,y,z;
        cin>>x>>y>>z;
        ll extra_x = x%z;
        ll extra_y = y%z;
        ll maxi = 0;
        maxi = maxi + x/z + y/z + (extra_x+extra_y)/z;
        cout<<maxi<<" ";
        ll mini = min(extra_x,extra_y);
        if((extra_x+extra_y)/z <= 0){
            cout<<0;
        }else{
            cout<<(mini - (extra_x+extra_y)%z);
        }

    }
}

