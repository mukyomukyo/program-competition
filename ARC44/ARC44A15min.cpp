#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    string ans = "Prime";
    if(n==1){
        ans ="Not Prime";
    }
    for(int i=2;i<=int(sqrt(n));i++){
        if(n % i ==0){
            ans ="Not Prime";
            break;
        }
    }
    if(ans =="Not Prime"&& n != 1){
        int m = n%10;
        int sum =0;
        while(n){
            sum += n%10 ;
            n/=10;
        }
        if((m==1||m==3||m==7||m==9)&& sum%3!=0){
            ans ="Prime";
        }
    }
    cout << ans << endl;
}