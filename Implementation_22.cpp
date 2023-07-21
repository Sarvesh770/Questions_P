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
        string s;
        cin>>s;
        vector<string>v(5);
        for(int i=0; i<5; i++){
            cin>>v[i];
        }
        bool flag = false;
        for(int i=0; i<5; i++){
            if(s[0] == v[i][0] || s[1] == v[i][1]){
                cout<<"YES";
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"NO";
        }
    }
}

