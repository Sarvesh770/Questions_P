#include <bits/stdc++.h>

using namespace std;

#define ll long
//typedef long long ll;
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
        ll nb,ns,nc;
        cin>>nb>>ns>>nc;
        ll pb,ps,pc;
        cin>>pb>>ps>>pc;
        ll r;
        cin>>r;
        ll a=0,b=0,c=0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'B'){
                a++;
            }else if(s[i] == 'S'){
                b++;
            }else{
                c++;
            }
        }
        ll lo=0,hi=r+200;
        while(lo<=hi){
            ll mid = lo + (hi-lo)/2;
            ll z=0;
            ll q1=max(a*mid - nb,z);
            ll q2=max(b*mid-ns,z);
            ll q3=max(c*mid-nc,z);
            ll price = ll(q1*pb) + ll(q2*ps) + ll(q3*pc);
            if(price<=r){
                lo = mid+1;
            }else{
                hi = mid-1;
            }
        }
        cout<<hi<<endl;
    }
    return 0;
}


