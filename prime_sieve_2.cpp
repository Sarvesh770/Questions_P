#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int mat[2][2];
int mat2[2][2];
int mat3[2][2];
int main(){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>mat2[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            int sum=0;
            for(int k=0; k<2; k++){
                sum += mat[i][k]*mat[k][j];
            }
            mat3[i][j]=sum;
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
}
