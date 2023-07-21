#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int min_diff=2e9;
        int index=-1;
        for(int i=1; i<n; i++){
            if(abs(v[i]-v[i-1]) < min_diff){
                min_diff=abs(v[i]-v[i-1]);
                index=i;
            }
        }
        vector<int>small,big;
        for(int i=0; i<n; i++){
            if(i == index || i == index-1) continue;
            if(v[i] > v[index-1]) big.push_back(v[i]);
        }
        for(int i=0; i<n; i++){
            if(i == index || i == index-1) continue;
            if(v[i] <= v[index]) small.push_back(v[i]);
        }
        cout<<v[index-1]<<" ";
        for(auto i:big) cout<<i<<" ";
        for(auto i:small) cout<<i<<" ";
        cout<<v[index]<<" "<<endl;
    }
    return 0;
}
