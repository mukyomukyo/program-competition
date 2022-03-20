#include<bits/stdc++.h>
using namespace std;
#define mod 998244353;
int64_t times10(int64_t a){
    int64_t b=1;
    for(int i=0;i<a;i++){
        b *= 10;
    }
    return b;
}
int64_t renzoku(int64_t x){
    x %= mod;
    x *= (x+1);
    x %= mod;
    x *=499122177;
    x %= mod;
    return x;
}
int main(){
    int64_t n;
    cin >>n;
    int64_t i=0;
    int64_t m =n;
    while(m>0){
        i++;
        m/=10;
    }
    int64_t sum =0;
    for(int64_t k=1;k<=i;k++){
        if(min(times10(k)-1,n)-times10(k-1) +1 >0){
            sum += renzoku(min(times10(k)-1,n)-times10(k-1) +1);
            sum %= mod;
        }
    }
    cout << sum << endl;    
}