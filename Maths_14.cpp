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
        if(n%4 == 0){
            cout<<"YES"<<endl;
            int sum = 0;
            for(int i=1; i<=n/2; i++){
                cout<<2*i<<" ";
                sum += 2*i;
            }
            int temp = 1;
            int sum_odd = 0;
            for(int i=0; i<n/2-1; i++){
                cout<<i+temp<<" ";
                sum_odd += (i+temp);
                temp++;
            }
            cout<<(sum-sum_odd)<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

