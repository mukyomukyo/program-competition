#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin >> a >> b >> k;
    vector<int> ans;
    for (int i=a; i>=1; i--){
        if (a % i==0 && b % i==0){
            ans.push_back(i);
        }
    }
    cout << ans.at(k-1) << endl;
}