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
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        string s;
        cin>>s;
        int n = s.length();
        int temp=1;
        int cnt_zero=0;
        vector<int>ans;
        int cnt=0;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]== '0'){
                cnt_zero++;
            }
            else{
                if(cnt_zero < n-1){
                    cnt++;
                    ans.push_back((s[i]-'0')*temp);
                }else{
                    cnt = 1;
                    ans.push_back((s[i]-'0')*temp);
                }
            }
            temp = temp*10;
        }
        cout<<cnt<<endl;
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

