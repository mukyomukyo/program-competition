#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    int ans = 0;
    cin >> n>> s;
    for(int i=0; i<1000;i++){
        int a[3] = {i/100, (i/10) % 10, i % 10};
        int situ = 0;
        for(int j=0; j<n; j++){
            if (situ <=2 && (int)(s[j]-'0') == a[situ]){
                situ ++;
            }
        }
        if (situ ==3){
            ans ++;
        }
    }
    cout << ans << endl;
}