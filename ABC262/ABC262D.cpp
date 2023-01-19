#include<bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
int main(){
    int n;
    vector<vector<int>> vec (n,vector<int>(n));
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        cin >>temp.at(i);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            vec.at(i).at(j) = temp.at(i)%j;
        }
    }

}
