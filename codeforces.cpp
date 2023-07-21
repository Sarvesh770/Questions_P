#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0) return false;
        bool flag = true;
        multiset<int>s;
        for(auto i:hand){
            s.insert(i);
        }
        for(auto it:s){
            s.erase(s.find(it));
            it++;
            int temp = groupSize;
            while(--temp){
                if(s.find(it) != s.end()){
                    s.erase(s.find(it));
                    it++;
                }else{
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
        }
        return flag;
    }

int main(){
    int k=3;
    vector<int> v={1,2,3,6,2,3,4,7,8};
    cout<<isNStraightHand(v,k);
    return 0;
}

