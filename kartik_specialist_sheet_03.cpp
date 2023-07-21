#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>a(n+1);
        unordered_map<ll,ll>mp;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            mp[a[i]-i]++;
        }
        ll ans = 0;
        for(auto i:mp){
            if(i.second >= 2){
                ll x=i.second;
                ans += (x*(x-1))/2;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}

