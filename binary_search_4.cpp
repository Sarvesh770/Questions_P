#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,h;
        cin>>n>>h;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll low=1,high=h;
        while(low<=high){
            ll mid = low + (high-low)/2;
            ll damage=0;
            for(int i=0; i<n-1; i++){
                damage += (a[i]+mid > a[i+1] ? a[i+1]-a[i]:mid);
            }
            damage += mid;
            if(damage >= h){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        cout<<low<<endl;
    }

}
