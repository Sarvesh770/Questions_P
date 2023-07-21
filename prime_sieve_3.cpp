#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        int maxi = *max_element(a.begin(),a.end());
        int mini = *min_element(a.begin(),a.end());
        int to_com=(maxi+mini)/2;
        for(int i=0; i<n; i++){
            if(abs(a[i]-to_com) > abs(b[i]-to_com)){
                swap(a[i],b[i]);
            }
        }
        int maximum=*max_element(a.begin(),a.end());
        int minimum=*min_element(a.begin(),a.end());
        cout<<maximum-minimum<<endl;
    }
    return 0;
}
/*int main() {
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       vector<ll>v(n);
       for(int i=0; i<n; i++){
            cin>>v[i];
       }
        bool flag=true;
        while(true){
            auto el = max_element(v.begin(),v.end());
            if(v[0] == *el){
                cout<<v[0]<<endl;
                flag=false;
                break;
            }
            ll ind=el-v.begin();
            ll temp = ((v[ind] - v[ind-1])%2==0)? (v[ind] - v[ind-1])/2 : (v[ind] - v[ind-1])/2 + 1;
            v[ind-1] += temp;
            v[ind] -= temp;

        }
        if(flag){
            cout<<*max_element(v.begin(),v.end())<<endl;
        }
    }
	return 0;
}
*/
