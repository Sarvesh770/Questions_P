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
        int x1,x2,x3,x4;
        cin>>x1>>x2>>x3>>x4;
        int maxi = max(x1,max(x2,max(x3,x4)));
        int a=0,b=0,c=0;
        if(x1 == maxi){
            a = x1 - x2;
            b = x3 - a;
            c = x4 - a;
            cout<<a<<" "<<b<<" "<<c;
        }else if(x2 == maxi){
            a = x2 - x1;
            b = x3 - a;
            c = x4 - a;
            cout<<a<<" "<<b<<" "<<c;
        }else if(x3 == maxi){
            a = x3 - x4;
            b = x2 - a;
            c = x1 - a;
            cout<<a<<" "<<b<<" "<<c;
        }else if(x4 == maxi){
            a = x4 - x1;
            b = x2 - a;
            c = x3 - a;
            cout<<a<<" "<<b<<" "<<c;
        }
    }
}

