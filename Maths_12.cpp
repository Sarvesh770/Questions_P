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
        int n; cin>>n;
        vector<int>v(n);
        int even_ct = 0, odd_ct = 0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]&1){
                odd_ct++;
            }else{
                even_ct++;
            }
        }
        if(n&1){
            if(even_ct != (n/2 + 1) || odd_ct != n/2){
                cout<<-1<<endl;
            }else{
                int ans=0;
                for(int i=0; i<n; i++){
                    if(i%2 != v[i]%2) ans++;
                }
                cout<<ans/2<<endl;
            }
        }else{
            if(odd_ct != n/2 || even_ct != n/2){
                cout<<-1<<endl;
            }else{
                int ans=0;
                for(int i=0; i<n; i++){
                    if(i%2 != v[i]%2) ans++;
                }
                cout<<ans/2<<endl;
            }
        }
    }
}

