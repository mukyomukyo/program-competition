#include<bits/stdc++.h>
using namespace std;
int rec(int64_t i, vector<int64_t> vec){
        if(vec.at(i-1) > 0){
            return vec.at(i-1); 
        }
        if (i >= 5){
            if(i % 2 ==1){
                vec.at(i-1) = rec(i/2 +1,vec) *rec(i/2,vec) %998244353;
                cout << vec.at(i-1) << " ";
                return (rec(i/2 +1,vec) *rec(i/2,vec)) % 998244353 ;
            }
            else{
                vec.at(i-1) = (rec(i/2,vec) *rec(i/2,vec))%998244353  ;
                cout << vec.at(i-1) << " ";
                return (rec(i/2,vec) *rec(i/2,vec)) %998244353 ;
            }
        }
        else{
            return i;
        }
    }
int main(){
    int64_t n;
    cin >>n;
    vector<int64_t>vec(n);
    cout << rec(n,vec) << endl;
    return 0;   
}