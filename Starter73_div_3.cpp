/* Q.1) Lucky Numbers */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        bool flag=false;
        while(x>0){
            int last_digit=x%10;
            if(last_digit == 7){
                flag = true;
                break;
            }
            x/=10;
        }
        flag==true ? cout<<"YES\n" : cout<<"NO\n";
    }
}

/* Q.2 Append for Or ) */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,y;
        cin>>n>>y;
        vector<ll>v(n);
        int Or=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            Or |= v[i];
        }
        if((y&Or) == Or){
            cout<<(y-Or)<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}


/* Q.3 Consecutive XOR ) */
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll xor=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            xor ^= v[i];
        }
        if(n&1){
            cout<<"YES"<<endl;
        }else{
            (xor==0 ? cout<<"YES\n" : cout<<"NO\n");
        }
    }
}
