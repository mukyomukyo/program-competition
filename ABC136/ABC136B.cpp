#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans=0;
    for (int i=1 ; i<=n ; i++){
        if (i<10){
            ans ++;
        }
        else if (i>=100 && i<1000){
            ans ++;
        }
        else if (i>=10000 && i< 100000){
            ans ++;
        }
    }
    cout << ans << endl;
}