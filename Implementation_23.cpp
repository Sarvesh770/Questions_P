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
        int n;
        cin>>n;
        int curr_tot = 0;
        int total = 0;
        int to_add = 1;
        int ans = 0;
        while(true){
            curr_tot += to_add++;
            total += curr_tot;
            ans++;
            if(total > n){
                ans--;
                break;
            }
        }
        cout<<ans;
    }
}

