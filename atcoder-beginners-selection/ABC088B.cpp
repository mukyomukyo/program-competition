#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int>vec(n);
    for (int i=0; i<n; i++){
        cin >> vec.at(i);
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(), vec.end());
    int ans = 0;
    for (int i=0; i<n; i++){
        if (i %2 ==0){
            ans += vec.at(i);
        }
        else{
            ans -= vec.at(i); 
        }
    }
    cout << ans << endl;
}