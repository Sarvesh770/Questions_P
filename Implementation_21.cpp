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
        vector<int>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int st = 0;
        int curr = 1, ans = 0;
        while(st < n-1){
            if(v[st] < v[st+1]){
                curr++;
                ans = max(ans,curr);
            }else{
                curr=1;
            }
            st++;
        }
        ans = max(ans,1);
        cout<<ans;
    }
}

