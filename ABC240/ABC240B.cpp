#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int64_t>vec(n);
    for (int i=0;i<n;i++){
        cin >> vec.at(i);
    }
    sort(vec.begin(), vec.end());
    int ans =1;
    for (int i=0;i<n-1;i++){
        if(vec.at(i+1)-vec.at(i)!=0){
            ans ++;
        }
    }
    cout << ans << endl;
}