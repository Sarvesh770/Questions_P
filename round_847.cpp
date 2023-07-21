#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        multiset<int>s;
        for(int i=0; i<n; i++){
            cin>>v[i];
            s.insert(v[i]);
        }
        int ans=0;
            for(auto i:s){
                ans++;
                mp[temp]--;
                if(mp[temp]==0){
                    mp.erase(temp);
                }
                while(mp.find(++flag) != mp.end()){
                    mp[flag]--;
                    if(mp[flag]==0){
                        mp.erase(flag);
                    }
                }
            }
        cout<<ans<<endl;



    }
    return 0;
}
