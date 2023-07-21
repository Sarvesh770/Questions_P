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
        int n,m;
        cin>>n>>m;
        char mat[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>mat[i][j];
            }
        }
        int ans=0;
        for(int i=0; i<n-1; i++){
            if(mat[i][m-1] == 'R'){
                ans++;
            }
        }
        for(int i=0; i<m-1; i++){
            if(mat[n-1][i] == 'D'){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}

