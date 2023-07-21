#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int k;
    cin>>k;
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }
    bool flag=false;
    for(auto i:mp){
        if(i.second % k != 0){
            flag = true;
            break;
        }
    }
    string ans="";
    if(flag) cout<<-1;
    else {
        for(auto it:mp){
            int times = it.second / k;
            while(times--){
                ans.push_back(it.first);
            }
        }
    }
    while(k--){
        cout<<ans;
    }
}


