#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
ll sum(ll n){
    return (n*(n+1))/2;
}
int main(){
    ll n,k;
    cin>>n>>k;
    n-=1;
    ll s = sum(k-1);
    if(s<n){
        cout<<-1;
    }else{
        int low = 0, high = k-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(s-sum(mid) >= n){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        cout<<k-high-1;
    }

}
