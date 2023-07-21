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
    int cnt = 0;
    for(int i=2; i<=10; i++){
        for(int j=2; j<=10; j++){
            for(int k=2; k<=10; k++){
                if((i+j+k)%10 == 2){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    cout<<"Hello World!"<<endl;
    }
}

