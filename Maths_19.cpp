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
        if(a<=b){
            cout<<(b-a)<<endl;
        }else if(a%b == 0){
            cout<<0<<endl;
        }else{
            /*int value = b;
            int i=2;
            while(value<a){
                value = b*(i++);
            }
            cout<<(value-a)<<endl; */
            int mod = a%b;
            int operation = b-mod;
            cout<<operation<<endl;
        }
    }
}

