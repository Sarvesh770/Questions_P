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
        ll n;
        cin>>n;
        int no=0;
        while(n){
            int last_digit = n%10;
            if(last_digit == 4 || last_digit == 7){
                no++;
            }
            n/=10;
        }
        bool flag = false;
        if(no == 0){
            cout<<"NO";
            break;
        }
        while(no){
            int last_dig = no%10;
            if(last_dig != 4 && last_dig != 7){
                flag = true;
                break;
            }
            no/=10;
        }
        if(flag){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    }
}

