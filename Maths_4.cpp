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
        int n,x;
        cin>>n>>x;
        if(n-2 <= 0){
            cout<<1<<endl;
        }else{
            n -= 2;
            if(n%x == 0){
                cout<<(n/x + 1)<<endl;
            }else{
                cout<<(n/x + 2)<<endl;
            }
        }
    }
}
