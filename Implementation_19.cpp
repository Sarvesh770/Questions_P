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
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        string s;
        cin>>s;
        map<int,int>mp;
        for(int i=0; i<s.size(); i+=2){
            mp[(s[i]-'0')]++;
        }
        int sz=mp.size();
        for(auto i:mp){
            sz--;
            int temp = i.second;
            while(temp--){
                if(sz == 0 && temp < 1){
                    cout<<i.first;
                }else{
                    cout<<i.first<<"+";
                }
            }
        }
    }
}

