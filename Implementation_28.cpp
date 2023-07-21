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
        unordered_set<char>st;
        st.insert('A');st.insert('E');st.insert('I');st.insert('O');st.insert('U');st.insert('Y');
        st.insert('a');st.insert('e');st.insert('i');st.insert('o');st.insert('u');st.insert('y');
        for(int i=0; i<s.size(); i++){
            if(st.find(s[i]) != st.end()){
                s.erase(i,1);
                i--;
            }
        }
        string ans="";
        ans.push_back('.');
        bool flag = true;
        for(int i=0; i<s.size();){
            if(flag){
                ans.push_back(tolower(s[i]));
                flag = !flag;
                i++;
            }else{
                ans.push_back('.');
                flag = !flag;
            }
        }
        cout<<ans;
    }
}

