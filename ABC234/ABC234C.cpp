#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t n;
    cin >>n;
    string ans ="";
    while(n>0){
        if(n%2== 0){
            ans = "0" + ans;
            n/=2;
        }
        else{
            ans = "2" + ans;
            n/=2;
        }
    }
    cout << ans << endl;
}