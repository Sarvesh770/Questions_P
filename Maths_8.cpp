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
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxi = max(a,max(b,c));
        int req_coin = 0;
        if(a < maxi) req_coin += (maxi-a);
        if(b < maxi) req_coin += (maxi-b);
        if(c < maxi) req_coin += (maxi-c);
        int rem_coin = 0;
        if(n>=req_coin){
            rem_coin = n-req_coin;
            if(rem_coin%3 == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}

