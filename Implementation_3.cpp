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
        int x=0,y=0;
        int ans = 0;
        int mat[6][6];
        for(int i=1; i<=5; i++){
            for(int j=1; j<=5; j++){
                cin>>mat[i][j];
                if(mat[i][j] == 1){
                    x = i;
                    y = j;
                }
            }
        }
        ans = ans + abs(3-x) + abs(3-y);
        cout<<ans;
    }
}

