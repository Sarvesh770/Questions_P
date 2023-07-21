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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int available_sets = ceil(1.0*n/2);
        int remaining_set = 0;
        int odd_required = 0;
        for(auto i:mp){
            if(i.second & 1){
                odd_required++;
                available_sets -= (i.second / 2);
            }else{
                available_sets -= (i.second / 2);
            }
        }
        if(available_sets >= odd_required){
            cout<<n;
        }else{
            cout<<n-(odd_required-available_sets);
        }
    }
}

