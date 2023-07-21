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
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<4*a*a<<endl;
        }else{
            int maxi = max(a,b);
            int mini = min(a,b);
            if((maxi*maxi) >= (2*a*b)){
                cout<<maxi*maxi<<endl;
            }else{
                if((mini+mini)<= (maxi+1)){
                   cout<<((maxi+1)*(maxi+1))<<endl;
                }else{
                    cout<<(2*mini)*(2*mini)<<endl;
                }
            }
        }
    }
}

