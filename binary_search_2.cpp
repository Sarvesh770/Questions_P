#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int low=0,high=2500;
    while(low <= high){
        int mid = low + (high - low)/2;
        int req = 0;
        for(int i=0; i<n; i++){
            int p = max(a[i]*mid - b[i],0);
            req+=p;
        }
        if(req <= k){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout<<high<<endl;
}
