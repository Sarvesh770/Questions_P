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
        int n;
        cin>>n;
        priority_queue<int>pq;
        for(int i=n; i>=1; i--){
            pq.push(i);
        }
        vector<pair<int,int>>v;
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            v.push_back({a,b});
            if((a+b) & 1){
                pq.push((a+b)/2 + 1);
            }else{
                pq.push((a+b)/2);
            }
        }
        cout<<pq.top()<<endl;
        for(int i=0; i<v.size(); i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }

    }
}

