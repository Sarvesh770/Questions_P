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
        int min_index = 0, max_index=0;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0; i<n; i++){
            if(v[i]<=mini){
                mini = v[i];
                min_index=i;
            }
            if(v[i]>maxi){
                maxi=v[i];
                max_index=i;
            }
        }
        if(max_index == 0 && min_index == n-1 && v[0]==v[1]){
            cout<<0;
        }else if(max_index > min_index){
            cout<<(max_index+n-1-min_index-1);
        }else{
            cout<<(max_index+n-1-min_index);
        }
    }
    return 0;
}

