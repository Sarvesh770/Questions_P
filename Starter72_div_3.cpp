/* Q.1) Alice gave bob three no.s A,B,C and challenged him to find an integer k strictly less than 100 such that
  none of the three no.s are divisible by k.*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        for(int k=1; k<100; k++){
            if(a%k != 0 && b%k != 0 && c%k != 0){
                cout<<k<<endl;
                break;
            }
        }
    }
    return 0;
}

/* Q.2) Rushitote wants to distribute N apples and M oranges which needs to be divided equally amongst the contestant
 Find the maximum possible number of contestants such that:
 -> Every contestant gets an equal number of apples; and
 -> Every contestant gets an equal number of oranges. */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        cout<<__gcd(n,m)<<endl;
    }
    return 0;
}

/* Q.3) Given a positive integer n find any three distinct positive integers a,b,c such that:
-> The product of any two of these three integers is a divisor of n.
-> The product of all three integers is a multiple of n. */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int  divisor(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return i;
        }
    }
    return -1;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int div=divisor(n);
        if(div == -1){
            cout<<-1<<endl;
        }else{
            cout<<div<<" "<<n/div<<" "<<1<<endl;
        }

    }
    return 0;
}

/* Q.4) No Sequence
Alice gave bob three integers N,K,S and asks him to find S good sequence
A sequence B of length N is called S good sequence if
Bi belongs to {-1,0,1} for each 1<=i<=N
Summation of Bi.K^i-1 == S
if multiple S good sequence print any of them
if no S good sequence print -2
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,k,s;
        cin>>n>>k>>s;

    }
    return 0;
}


/* Q.5)  */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){

    }
    return 0;
}


/* Q.6)  */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){

    }
    return 0;
}
