#include<bits/stdc++.h>
using namespace std;
int main(){
    int64_t n;
    cin >> n;
    int64_t a=1;
    for (int64_t i =sqrt(n); i>=1; i--){
        if (n % i ==0){
            a = i;
            break;
        }
    }
    int64_t b= n/a;
    int64_t ans = 0;
    while(b>0){
        ans ++ ;
        b/=10 ;
    }
    cout << ans << endl;
}