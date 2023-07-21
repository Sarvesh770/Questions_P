#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// calculating power of a number

ll power(ll a, ll b){
    int ans=1;
    while(b>0){
        if(b&1){
            ans *= a;
            b--;
        }
        b = b>>1;
        a*=a;
    }
    return ans;
}

/*ll pow(ll a, ll b){
    if(b==0){
        return 1;
    }
    ll X = pow(a,b/2);
    if(b&1){
        return X*X*a;
    }else{
        return X*X;
    }
}*/

/*bool isPrime(ll n){
    if(n <= 1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

bool isPrime(ll n){
    if(n <= 1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
void primeFact(ll n){
    for(int i=2; i<=n; i++){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout<<i<<"^"<<cnt<<" ";
        }
    }
    cout<<endl;
}*/

int primes[90000009];
void sieve(){
    int maxNo=9e7+1;
    primes[0]=primes[1]=0;
    for(int i=2; i<maxNo; i++) primes[i]=1;
    for(int i=2; i*i<=maxNo; i++){
        if(primes[i]){
            for(int j=i*i; j<= maxNo; j+=i){
                primes[j]=0;
            }
        }
    }
}
int main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        //int n;
        //cin>>n;
        /*if(isPrime(n)){
            cout<<"Yes it is prime"<<endl;
        }else{
            cout<<"Not prime"<<endl;
        }
        primeFact(n);*/
        /*for(int i=0; i<n; i++){
            if(primes[i]==1){
                cout<<i<<" ";
            }
        }*/
        ll a,b;
        cin>>a>>b;
        cout<<power(a,b)<<endl;
    }
}
