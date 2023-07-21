
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,m;
vector<int>v;
bool check(ll x){
    ll prev = 0;
    for(int i=0; i<n; i++){
        if(prev <= v[i]){
            ll k=m-(v[i]-prev);
            if(k>x) prev=v[i];
        }else{
            ll k=prev-v[i];
            if(k>x){
                return false;
            }
        }
    }
    return true;
}

int main(){

    cin>>n>>m;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    ll low=0,high=m;
    while((high-low)>1 ){
        int mid = low + (high-low)/2;
        if(check(mid)){
            high = mid;
        }else{
            low=mid+1;
        }
    }
    if(check(low)){
        cout<<low;
        return 0;
    }
    cout<<high;
    return 0;
}

