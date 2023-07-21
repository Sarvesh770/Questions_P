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
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[n];
        ll b[m];
        ll sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+= a[i];
        }
        ll bsum=0;
        for(int i=0; i<m; i++){
            cin>>b[i];
            bsum += b[i];
        }
        int i=0,j=m-1;
        int temp = min(n,m);
        while(temp--){
            sum -= a[i++];
            sum += b[j--];
        }
        cout<<sum<<endl;
    }
    return 0;
}


