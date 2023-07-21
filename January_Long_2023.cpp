/* Q.1) Far from Origin */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if((x1*x1 + y1*y1) > (x2*x2 + y2*y2)){
            cout<<"ALEX"<<endl;
        }else if((x1*x1 + y1*y1) < (x2*x2 + y2*y2)){
            cout<<"BOB"<<endl;
        }else{
            cout<<"EQUAL"<<endl;
        }

    }
}


/* Q.2) Asymmetric Swaps */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(2*n);
        for(ll i=0; i<2*n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int min_diff=INT_MAX;
        int j=0;
        for(int i=n; i<2*n; i++){
            min_diff = min(min_diff,v[i]-v[j++]);
        }
        cout<<min_diff<<endl;
    }
}


/* Q.3) Array halves */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(2*n);
        for(int i=0; i<2*n; i++){
            cin>>v[i];
        }
        vector<ll>a(n);
        vector<ll>b(n);
        for(int i=0; i<2*n; i++){
            if(i<n && v[i]> n)a.push_back(i+1);
            if(i>=n && v[i]<=n)b.push_back(i+1);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans=0;
        for(int i=0; i<a.size(); i++){
            ans += abs(b[i]-a[i]);
        }
        cout<<ans<<endl;
    }
}
