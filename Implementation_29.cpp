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
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        int n;
        cin>>n;
        vector<int>v(2*n);
        for(int i=0; i<2*n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<v[n]-v[n-1]<<endl;
    }
}
