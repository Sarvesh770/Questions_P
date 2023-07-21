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
        int x,y,z;
        cin>>x>>y>>z;
        int maxi = max(x,max(y,z));
        int max_ct = 0;
        if(x == maxi) max_ct++;
        if(y == maxi) max_ct++;
        if(z == maxi) max_ct++;
        if(max_ct == 3){
            cout<<"YES"<<endl;
            cout<<maxi<<" "<<maxi<<" "<<maxi<<endl;
        }else if(max_ct == 2){
            cout<<"YES"<<endl;
            cout<<maxi<<" "<<min(x,min(y,z))<<" "<<min(x,min(y,z))<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

