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
        int n=s.length();
        int f = s[0]-'0';
        if(f == 9){
            s[0]=s[0];
        }else{
            if(f>4){
                s[0] = ((9-f) + '0');
            }
        }
        for(int i=1; i<n; i++){
            int digit = s[i] - '0';
            if(digit > 4){
                s[i] = ((9-digit) + '0');
            }else{
                continue;
            }
        }
        cout<<s;
    }
}

