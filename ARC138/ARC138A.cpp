#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int64_t> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec.at(i) ;
    }
    vector<int64_t> ans(n);
    for(int i=0;i<n;i++){
        ans.at(i)=vec.at(i);
    }
    

}