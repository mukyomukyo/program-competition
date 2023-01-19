#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t n;
    cin >> n;
    string ans = "";
    while(n){
        int64_t a = n % 26;
        if(a==0){
            ans = 'z' +ans;
            if(n==26){
                break;
            }
        }
        else{
            char anstemp = 'a' + a - 1;
             ans = anstemp + ans;
        }
        if(a==0){
            n/=26;
            n--;
        }
        else{
            n /= 26;
        }
    }
    cout << ans << endl;
}